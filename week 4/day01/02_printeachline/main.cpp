#include <iostream>
#include <fstream>

int main () {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream myFile;

    myFile.open ("../my-file.txt");

    if(myFile.is_open()){
        std::cout << ":)" << std::endl;
    }else {
        std::cout << ":(" << std::endl;
    }

    std::string line;
    while (std::getline(myFile,line))
        {
            std::cout << line << '\n';
        }
        myFile.close();

    return 0;
}
