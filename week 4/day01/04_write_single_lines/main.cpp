#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line


    std::ofstream myFile;
    myFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    try {
        myFile.open("../my-file.txt");
        std::string str = "Fruzsina Zsofia Vegh";
        myFile << str;
        myFile.close();
    } catch (std::ofstream::failure& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
