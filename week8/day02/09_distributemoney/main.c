#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void distribute_money(int *relatives, int size, int money);

int main()
{
// $ 1024
    srand(time(NULL));
    int relatives = 20 + (rand()) % 30;
    int *relatives_group = (int *) calloc((size_t) relatives, sizeof(int));

    distribute_money(relatives_group, relatives, 1024);
    for (int i = 0; i < relatives; i++)
        printf("%d. relative has: $ %d\n", i , relatives_group[i]);

    free(relatives_group);
    return 0;
}

void distribute_money(int *relatives, int size, int money)
{
    while (money > 0) {
        int lucky_member = rand() % size;
        relatives[lucky_member] += money;
        // printf("%d. relative inherits: %d\n", lucky_member, money);
        money = money / 2;
    }
}
