#include <iostream>
using namespace std;

int main()
{
    // Problem #2: Fractional Part
    // Write a program that reads 2 numbers a, b and divides
    // them(a / b), but prints only the fraction part return 0;

    // example 201 25 => 0.04

    double a, b;
    cin >> a >> b;

    double result = a / b;
    cout << result - (int)result << endl;

    // another way
    int c = a;
    int d = b;
    double remainder = c % d;
    double result2 = remainder / d;
    cout << result2 << endl;

    return 0;
}
