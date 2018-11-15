#include <iostream>

void counter (int count) {

    if (count >= 1) {
        counter(count - 1);
        std::cout << "Number: " << count << std::endl;
    }
}


int main() {

    int n;
    std::cout << "Type in an integer: " << std::endl;
    std::cin >> n;

    counter(n);

    return 0;
}