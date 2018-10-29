#include <iostream>
#include <string>

void printParams ( std::string first);
void printParams ( std::string first, std::string second);
void printParams ( std::string first, std::string second, std::string third, std::string forth);


int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...

    printParams("first");
    printParams("first","second");
    printParams("first","second","third", "forth");

    return 0;
}

void printParams(std::string first)
{
    std::cout << first << std::endl;
}

void printParams(std::string first, std::string second)
{
    std::cout << first << "," << second << std::endl;
}

void printParams(std::string first, std::string second, std::string third, std::string forth)
{
    std::cout << first << "," << second << "," << third << "," << forth <<  std::endl;
}
