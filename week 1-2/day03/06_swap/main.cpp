#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main(int argc, char* args[]) {
    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.

    int a = 15, b = 23;

    std::cout << "Value of a before: " << a << std::endl;
    std::cout << "Value of b before: " << b << std::endl;

    std::swap (a, b);

    std::cout << "Value of a now: " << a << std::endl;
    std::cout << "Value of b now: " << b << std::endl;

    return 0;
}
