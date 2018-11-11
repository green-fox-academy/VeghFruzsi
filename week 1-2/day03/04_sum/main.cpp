#include <iostream>
#include <string>

int sum (int numbers){
    int y = 0;
    for ( int x = 0; x<= numbers; x++ ){
        y = y + x;
    }
    return y;
}

int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer
int numbers;
    std::cout << "Number please" << std::endl;
    std::cin >> numbers;

    int sum (int numbers);

    std::cout << sum(numbers) << std::endl;

    return 0;
}
