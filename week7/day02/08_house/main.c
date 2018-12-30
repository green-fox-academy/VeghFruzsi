#include <stdio.h>

/*
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

typedef struct{
    char *address;
    int price;
    int room;
    int area;
}House;

int market_price (House *house);
int worthy_houses (House *house, int array_length);

int main()
{
    House h1;
    h1.address = "200. Baker Street";
    h1.price = 12000;
    h1.room = 5;
    h1.area = 120;

    House h2;
    h2.address = "410. Baker Street";
    h2.price = 90000;
    h2.room = 10;
    h2.area = 210;

    House h3;
    h3.address = "370. Baker Street";
    h3.price = 160000;
    h3.room = 2;
    h3.area = 300;

    printf("%d, ",market_price (&h1));
    printf("%d, ",market_price (&h2));
    printf("%d\n\n",market_price (&h3));

    House house[] = {h1, h2, h3};
    int array_length = sizeof(house) / sizeof(house[0]);
    printf("Worthy houses: %d", worthy_houses(house, array_length));

    return 0;
}

int market_price (House *house){
    if((house->price / house->area) < 401){
        return 1;
    } else{
        return 0;
    }
}

int worthy_houses (House *house, int array_length){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if(market_price(&house[i]) == 1){
            counter ++;
        }
    }
    return counter;
}