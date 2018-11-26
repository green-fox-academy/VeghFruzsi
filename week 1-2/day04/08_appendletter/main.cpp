#include <iostream>
#include <vector>
#include <string>



std::vector<std::string> appendA(std::vector<std::string> &animals){
    for(int i = 0; i < animals.size(); i++){
        animals[i]+= 'a';
    }
    return animals;
}

int main(int argc, char* args[])
{
    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.


    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    for(const auto& animal : appendA(animals))
    {
        std::cout << animal << " ";
    }

    return 0;
}


