
#include <iostream>
#include <string>

int factorio (int numbers){
    int j = 1;
    for (int i = 1; i <= numbers ; ++i) {
        j = j * i;
    }
    return j;
}

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   that returns it's input's factorial

    int numbers;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> numbers;

    int factorio(int numbers);

    std::cout << "The factorial is " << factorio(numbers);
    
    return 0;
}