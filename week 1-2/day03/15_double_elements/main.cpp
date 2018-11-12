#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array


    int numList[] = {3, 4, 5, 6, 7};

   /* for ( int x = 0; x < sizeof(numList) / sizeof(numList[0]); ++x)
    {
        std::cout << numList[x] * 2 << std::endl;
    }*/

    for ( int x : numList)
    {
        std::cout << x * 2 << std::endl;
    }

    return 0;
}

