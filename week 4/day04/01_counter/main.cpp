#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

void counter (int count) {

    if (count > 0) {
        std::cout << "Number: " << count << std::endl;
        counter(count - 1);
    }
}


int main() {

    int n;
    std::cout << "Type in an integer: " << std::endl;
    std::cin >> n;

    counter(n);

    return 0;
}