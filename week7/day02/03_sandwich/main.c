#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/
struct Sandwich {
    char name[100];
    float price;
    float weight;
} ;

float price_of_your_order(struct Sandwich b, float p);

int main()
{
    int piece = 3;
    struct Sandwich sandwich;

    printf("%.2f", price_of_your_order(sandwich, piece));

    return 0;
}

float price_of_your_order(struct Sandwich b, float p){
    b.price = 5.2;
    float order_price = b.price * p;
    return order_price;
}
