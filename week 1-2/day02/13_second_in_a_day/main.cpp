#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int wholeDayInSeconds = 24 * 60 * 60;
    int currentDaySeconds = (14 * 60 * 60) + (34 * 60) + 42;
    int howManySecondsLeft = wholeDayInSeconds - currentDaySeconds;
    std::cout << howManySecondsLeft << std::endl;

    return 0;
}