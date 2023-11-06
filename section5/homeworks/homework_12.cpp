#include <iostream>
using namespace std;

int main()
{
    /**
     * ● Write a program that reads an integer and print
     * the 4th from the right side. If no such digit, print 0
        ● Inputs => outputs
        ○ 15 => 0
        ○ 125 => 0
        ○ 1000 => 1
        ○ 5001 => 5
        ○ 1234 => 1
        ○ 654321 => 4
        ○ 99999 => 9
    */
    int n;
    cin >> n;
    cout << (n / 1000) % 10 << "\n";
    return 0;
}
