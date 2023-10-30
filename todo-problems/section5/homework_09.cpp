#include <iostream>
using namespace std;

int main()
{
    //  Problem #3:
    /**
        ● We know N % M computes the remainder of division
        ● Write a program that reads 2 positive integers and print such reminder without
        using the modulus operator %
        ● Input: 27 12
        ● Output: 3
        ○ Remember in math: 27 % 12 = 3
    */
    int a, b;
    cin >> a >> b;
    int result = a - (a / b) * b;
    cout << result;
}
