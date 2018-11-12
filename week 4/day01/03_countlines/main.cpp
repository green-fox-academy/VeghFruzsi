#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void cloudyTiredDays(){
    std::ifstream dawnFile("../dawn.txt");

    if (dawnFile.is_open()){
        std::cout << ":)" << std::endl;
    }else{
        std::cout << ":(" << std::endl;
    }

    int numberOfLines = 0;
    std::ifstream things("../dawn.txt");
    std::string numberString;

    while(std::getline(things, numberString)) {
        ++numberOfLines;
    }
    std::cout << numberOfLines << std::endl;
}



int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file


    cloudyTiredDays();

    return 0;
}
