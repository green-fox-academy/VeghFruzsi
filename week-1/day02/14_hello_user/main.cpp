#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string userName;
    std::cout << "Please enter your name: " << std::endl;
    std::cin >> userName;

    std::cout << " Hello, " << userName << "! How do you do?" << std::endl;

    return 0;
}