#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *temperaturePtr = nullptr;

    std::cout << "The value of temperature is " << temperature << std::endl;
    std::cout << "The memory address of temperature is " << &temperature << std::endl;

    std::cout << "The value of temperaturePtr is " << temperaturePtr << std::endl;

    temperaturePtr = &temperature;

    std::cout << "The memory address of temperaturePtr is " << temperaturePtr << std::endl;

    *temperaturePtr = 52;

    std::cout << "The value of temperaturePtr is " << *temperaturePtr << std::endl;


    return 0;
}
