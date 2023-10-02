#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // cout << INT_MAX; # 2147483647
    // cout << INT_MIN; // -2147483648

    double number1, number2;  // double handle more numbers

    cin >> number1 >> number2;

    cout << number1 << "+" << number2 << "=" << number1 + number2 << endl;
    cout << number1 << "-" << number2 << "=" << number1 - number2 << endl;
    cout << number1 << "*" << number2 << "=" << number1 * number2 << endl;
    cout << number1 << "/" << number2 << "=" << number1 / number2 << endl;
}