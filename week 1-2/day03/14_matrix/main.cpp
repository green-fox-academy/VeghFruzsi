#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output


    int x = 4;
    int matrix [x][x] = {};

    for ( int i = 0; i <= x; i++ )
    {
        for (int j = 0; j <= x; j++ )
        {
            if (i == j)
            {
                std::cout << "1";
            } else {
                std::cout << "0";
            }
        }
        std::cout << std::endl;
    }


















    /*int const input = 4;
    int matrix[input][input];

    for (int i = 0; i < input; ++i)
    {
        for (int j = 0; j < input; ++j)
        {
            if(i == j)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }*/

    return 0;

}