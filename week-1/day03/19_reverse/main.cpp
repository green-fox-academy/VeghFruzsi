#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char* args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj [] = { 3, 4, 5, 6, 7};

    std::reverse(std::begin(aj), std::end(aj));

    for(auto e : aj) {
        std::cout << e << " " ;
    }
    return 0;
}


