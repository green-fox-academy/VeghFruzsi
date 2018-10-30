#include <iostream>
#include <string>



int main(int argc, char* args[])
{

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    std::string str = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    str = std::string(str.rbegin(),str.rend());
    std::cout << str << std::endl;

    return 0;
}
