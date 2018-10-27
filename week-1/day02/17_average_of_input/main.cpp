#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int yourHeight, yourAge, yourChildren, yourSiblings, yourDayOfBirth, numbersSum, averageOfNumbers;

    std::cout << "Please write, how tall are you?" << std::endl;
    std::cin >> yourHeight;

    std::cout << "Please write, how old are you?" << std::endl;
    std::cin >> yourAge;

    std::cout << "Please write, how many children do you have?" << std::endl;
    std::cin >> yourChildren;

    std::cout << "Please write, how many siblings do you have?" << std::endl;
    std::cin >> yourSiblings;

    std::cout << "Please write, on which day were you born?" << std::endl;
    std::cin >> yourDayOfBirth;

    numbersSum = yourHeight + yourAge + yourChildren + yourSiblings + yourDayOfBirth;
    averageOfNumbers = numbersSum / 5;

    std::cout << "Your numbers sum is: " <<  numbersSum << std::endl;
    std::cout << "Your lucky number is: " << averageOfNumbers << std::endl;


    return 0;
}