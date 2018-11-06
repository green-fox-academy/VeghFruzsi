#include <iostream>
#include <vector>
#include <string>



std::string appendA (std::string animals );
std::string appendAFunc (std::string typo );



int main(int argc, char* args[])
{
    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.


    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};
    std::string appendA (animals);

    return 0;
}


std::string appendA (std::string animals ){
    std::cout << animals << "a " << std::endl;
}