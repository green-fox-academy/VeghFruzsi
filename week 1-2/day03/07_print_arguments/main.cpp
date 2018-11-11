#include <iostream>
#include <string>

void printParams (std::string first){
    std::cout << first << std::endl;
}

void printParams (std::string first, std::string second){
    std::cout << first << ", " << second << std::endl;
}

void printParams (std::string first, std::string second, std::string third){
    std::cout << first << ", " << second <<", " << third <<std::endl;
}

void printParams (std::string first, std::string second, std::string third, std::string forth){
    std::cout << first << ", " << second <<", " << third << ", " << forth << std::endl;
}

int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...
    std::string first = "first";
    std::string second = "second";
    std::string third = "third";
    std::string forth = "forth";

    printParams (first);
    printParams (first, second);
    printParams (first, second, third);
    printParams (first, second, third, forth);

return 0;
}
