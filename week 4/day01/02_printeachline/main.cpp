#include <iostream>
#include <fstream>

int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream myPracticeFile;

    myPracticeFile.open("../mypracticefile.txt");

    if (myPracticeFile.is_open()) {
        std::cout << "OPEN" << std::endl;
    } else {
        std::cout << "Your file is CLOSED." << std::endl;
    }

    std::string line;
    while (std::getline(myPracticeFile, line)) {
        std::cout << line << '\n';
    }

    myPracticeFile.close();

    return 0;
}
