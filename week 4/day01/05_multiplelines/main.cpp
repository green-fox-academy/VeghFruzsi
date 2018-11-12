#include <iostream>
#include <fstream>
#include <string>

int createMultiLines ();

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main() {

int createMultiLines (){


}

//write plus lines
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

//countlines
    int numberOfLines = 0;
    std::ifstream things("../dawn.txt");
    std::string numberString;

    while(std::getline(things, numberString)) {
        ++numberOfLines;
    }
    std::cout << numberOfLines << std::endl;


    return 0;
}
