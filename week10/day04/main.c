#include "stm32f7xx_hal.h"
#include "stm32746g_discovery.h"

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

#define UART_PUTCHAR int __io_putchar(int ch)

GPIO_InitTypeDef button;
UART_HandleTypeDef uart_handle;

TIM_HandleTypeDef tim2_handle; // greenled toggle timer
TIM_HandleTypeDef tim3_handle; // after button pushing timer

typedef enum blinking_state {
	NORMAL,
	SLOWING,
} blinking_state_t ;

void button_init()
{
	// ===== BUTTON
    __HAL_RCC_GPIOI_CLK_ENABLE();
    button.Pin = GPIO_PIN_11;
    button.Pull = GPIO_NOPULL;
    button.Speed = GPIO_SPEED_FAST;
    button.Mode = GPIO_MODE_IT_RISING_FALLING;
    HAL_GPIO_Init(GPIOI, &button);

    // ===== INTERRUPT
    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0x02, 0x00);
    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

void uart_init(){
	 __HAL_RCC_USART1_CLK_ENABLE();
	uart_handle.Instance = USART1;
	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);
}

void timer2_init()
{
    __HAL_RCC_TIM2_CLK_ENABLE();
    tim2_handle.Instance = TIM2;
    tim2_handle.Init.Period = 5000;
    tim2_handle.Init.Prescaler = 10800;
    tim2_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    tim2_handle.Init.CounterMode = TIM_COUNTERMODE_UP;
    HAL_TIM_Base_Init(&tim2_handle);

    HAL_NVIC_SetPriority(TIM2_IRQn, 0x02, 0x00);
    HAL_NVIC_EnableIRQ(TIM2_IRQn);

    HAL_TIM_Base_Start_IT(&tim2_handle);
}

void timer3_init()
{
    __HAL_RCC_TIM3_CLK_ENABLE();
    tim3_handle.Instance = TIM3;
    tim3_handle.Init.Period = 100000;
    tim3_handle.Init.Prescaler = 10800;
    tim3_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    tim3_handle.Init.CounterMode = TIM_COUNTERMODE_UP;
    HAL_TIM_Base_Init(&tim3_handle);

    HAL_NVIC_SetPriority(TIM3_IRQn, 0x01, 0x00);
    HAL_NVIC_EnableIRQ(TIM3_IRQn);

    HAL_TIM_Base_Start_IT(&tim3_handle);
}

blinking_state_t blinking_state = NORMAL;

int main(void) {

	MPU_Config();
	CPU_CACHE_Enable();
	HAL_Init();
	SystemClock_Config();

	BSP_LED_Init(LED_GREEN);
	button_init();
	uart_init();
	timer2_init();
	timer3_init();

	printf("**** Hello in my blinking application ****\r\n");

	while (1) {

	}

}

UART_PUTCHAR
{
    HAL_UART_Transmit(&uart_handle, (uint8_t*) &ch, 1, 0xFFFF);
    return ch;
}

void TIM2_IRQHandler()
{
    HAL_TIM_IRQHandler(&tim2_handle);
}

void TIM3_IRQHandler()
{
    HAL_TIM_IRQHandler(&tim3_handle);
}

//=== interrupt button function
void EXTI15_10_IRQHandler()
{
    HAL_GPIO_EXTI_IRQHandler(button.Pin);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if(htim->Instance == TIM2){
        //printf("szia %d TIM2\r\n", HAL_GetTick());
        BSP_LED_Toggle(LED_GREEN);
    }else if(htim->Instance == TIM3){
        //printf("szia %d TIM3\r\n", HAL_GetTick());
    }
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if (blinking_state == SLOWING) {
        //elmentjuk a hal_gettick erteket
        printf("normal blinking\r\n");
        TIM2->PSC >>= 2;
        TIM3->CNT;
        blinking_state = NORMAL;

        /*HAL_TIM_Base_Stop_IT(&tim2_handle);
        HAL_TIM_Base_DeInit(&tim2_handle);
        tim2_handle.Init.Period = 2500;
        HAL_TIM_Base_Init(&tim2_handle);
        HAL_TIM_Base_Start_IT(&tim2_handle);*/



    } else {
        //az eltelt ido: gettick - start
        printf("SLOWLY BLINKING\r\n");
        blinking_state = SLOWING;

        /*HAL_TIM_Base_Stop_IT(&tim2_handle);
        HAL_TIM_Base_DeInit(&tim2_handle);
        tim2_handle.Init.Period = 10000;
        HAL_TIM_Base_Init(&tim2_handle);
        HAL_TIM_Base_Start_IT(&tim2_handle);*/

        TIM2->PSC <<= 2;
    }


}

static void SystemClock_Config(void) {

	RCC_ClkInitTypeDef RCC_ClkInitStruct;

	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* Enable HSE Oscillator and activate PLL with HSE as source */

	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;

	RCC_OscInitStruct.HSEState = RCC_HSE_ON;

	RCC_OscInitStruct.HSIState = RCC_HSI_OFF;

	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;

	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;

	RCC_OscInitStruct.PLL.PLLM = 25;

	RCC_OscInitStruct.PLL.PLLN = 432;

	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;

	RCC_OscInitStruct.PLL.PLLQ = 9;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {

		Error_Handler();

	}

	/* activate the OverDrive to reach the 216 Mhz Frequency */

	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {

		Error_Handler();

	}

	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2

	 clocks dividers */

	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK

	| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);

	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;

	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;

	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;

	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {

		Error_Handler();

	}

}

/**

 * @brief  This function is executed in case of error occurrence.

 * @param  None

 * @retval None

 */

static void Error_Handler(void) {

	/* User may add here some code to deal with this error */

	while (1) {

	}

}

/**

 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.

 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.

 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.

 * @param  None

 * @retval None

 */

static void MPU_Config(void) {

	MPU_Region_InitTypeDef MPU_InitStruct;

	/* Disable the MPU */

	HAL_MPU_Disable();

	/* Configure the MPU attributes as WT for SRAM */

	MPU_InitStruct.Enable = MPU_REGION_ENABLE;

	MPU_InitStruct.BaseAddress = 0x20010000;

	MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;

	MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;

	MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;

	MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;

	MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;

	MPU_InitStruct.Number = MPU_REGION_NUMBER0;

	MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;

	MPU_InitStruct.SubRegionDisable = 0x00;

	MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

	HAL_MPU_ConfigRegion(&MPU_InitStruct);

	/* Enable the MPU */

	HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);

}

/**

 * @brief  CPU L1-Cache enable.

 * @param  None

 * @retval None

 */

static void CPU_CACHE_Enable(void) {
	/* Enable I-Cache */
	SCB_EnableICache();
	/* Enable D-Cache */
	SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**

 * @brief  Reports the name of the source file and the source line number

 *         where the assert_param error has occurred.

 * @param  file: pointer to the source file name

 * @param  line: assert_param error line source number

 * @retval None

 */

void assert_failed(uint8_t* file, uint32_t line)

{

	/* User can add his own implementation to report the file name and line number,

	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */

	while (1)

	{

	}

}

#endif

/**

 * @}

 */

/**

 * @}

 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

