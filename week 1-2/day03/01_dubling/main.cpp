#include <iostream>
#include <string>

// - Create an integer variable named `baseNum` and assign the value `123` to it
// - Create a function called `doubling` that doubles it's input parameter and returns with an integer
// - Print the result of `doubling(baseNum)`



int doubling(int baseNum)
{
    return baseNum * 2;
}

int main(int argc, char* args[])
{
    int baseNum = 123;

    std::cout << doubling(baseNum) << std::endl;

    return 0;

}
