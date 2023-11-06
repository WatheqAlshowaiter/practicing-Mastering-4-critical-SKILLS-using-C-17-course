#include <iostream>
using namespace std;

int main()
{
    /**
     *  Write a program that reads an integer and prints the sum of its last 3 digits.
        ● Inputs ⇒ Outputs examples ○ 15 ⇒6
        ○ 125 ⇒8 ○ 1000 ⇒ 0 ○ 1001 ⇒1 ○ 1234 ⇒9 ○ 99999⇒27
    */
    int last1, last2, last3, number;
    cin >> number;

    last1 = number % 10;
    number /= 10;

    last2 = number % 10;
    number /= 10;

    last3 = number % 10;
    number /= 10;

    cout << last1 + last2 + last3 << endl;

    return 0;
}
