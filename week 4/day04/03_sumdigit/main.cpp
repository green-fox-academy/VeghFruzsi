#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).


int sumOfDigit(int n)
{
    if (n == 0) {
        return 0;
    }else {
        return (n % 10) + sumOfDigit(n / 10));
    }
}


int main()
{
    int num = 7569;
    int result = sumOfDigit(num);
    std::cout << "Sum of digits in " << num << " is " << result << std::endl;
    return 0;
}