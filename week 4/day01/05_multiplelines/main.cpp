#include <iostream>
#include <fstream>
#include <string>

int createMultiLines(std::string path, std::string word, int number);

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main() {

    std::string path = "mlines.txt";
    std::string word;
    int number;
    createMultiLines(path, word, number);
    return 0;
}

int createMultiLines(std::string path, std::string word, int number) {
    std::ofstream myFile("../" + path);
    std::cout << "Please give me a word: " << std::endl;
    std::cin >> word;
    std::cout << "Please give me a number: " << std::endl;
    std::cin >> number;

    if (myFile.is_open()) {
        for (int i = 0; i < number; ++i) {
            myFile << word << '\n';
        }
    } else {
        std::cout << "We can't open the file." << std::endl;
    }
    myFile.close();
    return 0;
}
