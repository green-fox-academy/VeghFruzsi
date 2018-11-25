#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int linesInMyDawnFile(std::string);


int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string fileName = "../dawn.text";
    std::cout << linesInMyDawnFile(fileName) << std::endl;

    return 0;
}

int linesInMyDawnFile(std::string) {
    std::ifstream dawnFile("../dawn.txt");

    if (dawnFile.is_open()) {
        std::cout << "OPEN" << std::endl;
    } else {
        std::cout << "Your file is CLOSED." << std::endl;
    }

    int numberOfLines = 0;
    std::string numberOfString;

    while (std::getline(dawnFile, numberOfString)) {
        numberOfLines++;
    }
    return numberOfLines;
}