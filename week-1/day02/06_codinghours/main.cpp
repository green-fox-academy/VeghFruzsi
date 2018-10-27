
#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    int week = 17;
    int workingDays = 5;
    int hours = 6;

    std::cout << week * workingDays * hours << std::endl;

    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52
    int workingHours = 52;
    std::cout << (float)workingDays * hours / workingHours * 100 << std::endl;

    return 0;
}