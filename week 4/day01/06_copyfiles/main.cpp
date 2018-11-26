#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyFile(std::string basicFile, std::string newFile);


int main() {

    copyFile("../plant.txt", "../plant2.txt");

    return 0;
}

bool copyFile(std::string basicFile, std::string newFile) {
    std::ifstream plant;
    std::ofstream plant2;
    std::string line;
    plant.open(basicFile);
    plant2.open(newFile);
    try {
        if (plant.is_open() && plant2.is_open()) {
            while (getline(plant, line)) {
                plant2 << line << std::endl;
            }
            std::cout << "Copying is ready!" << std::endl;
            plant2.close();
            plant.close();
        } else
            throw -42;
    } catch (int error) {
        std::cout << "Error: " << error << std::endl;
    }
    return true;
}

