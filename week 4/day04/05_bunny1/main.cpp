#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int bunnyEars(int n){
    if ( n > 0){
    return 2 + bunnyEars(n-1);
    }else{
        return 0;
    }
}

int main() {

    std::cout << bunnyEars(10) << std::endl;
    return 0;
}


