#include <iostream>
using namespace std;

int main()
{
    cout << __cplusplus << "\n";

    double a = 3.0 / 7.0;
    double b = 1 + 3.0 / 7.0 - 1;

    cout << a << " " << b << " " << (a == b) << endl;

    cout << a - b << endl;
    string a_str = "love"; // Changed the variable name to "str_a"
    string b_str = "long"; // Changed the variable name to "str_b"

    cout << (a_str > b_str) << endl;

    cout << (a > b) << endl; // Use "str_a" and "str_b" for string comparison
}