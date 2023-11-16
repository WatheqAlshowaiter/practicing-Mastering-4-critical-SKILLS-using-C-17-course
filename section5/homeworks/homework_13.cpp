#include <iostream>
using namespace std;

int main()
{
    /*
    Write a program that reads an integer and print 100 if number is even or 7 if
number is odd
○ E.g. for input 8 ⇒ 100
○ E.g. for input 133 ⇒ 7
    */
    int n, output;
    cin >> n;
    int is_even = n % 2 == 0;
    int is_odd = 1 - is_even;

    int result = is_even * 100 + is_odd * 7;

    cout << output << endl;
    return 0;
}
