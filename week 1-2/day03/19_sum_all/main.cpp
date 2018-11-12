#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`

   int ai [] ={3, 4, 5, 6, 7};
   int sum = 0;

   for ( int x = 0; x < sizeof(ai) / sizeof(ai[0]); x++)
   {
     sum = sum + ai[x];
   }
   std::cout << "Elements of array's sum is: " << sum << std::endl;

   return 0;

}