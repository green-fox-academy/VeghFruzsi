#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`

    std::string abc[] = {"first", "second", "third"};

    abc[0].swap (abc[2]);

    std::cout << abc[0] <<std::endl;
    std::cout << abc[2] <<std::endl;

    return 0;
}
