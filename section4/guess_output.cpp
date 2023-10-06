#include <iostream>
using namespace std;

int main()
{
    int a = 0;                 //
    cout << (a = 10)++ << " "; // 10
    cout << a << "\n";         // 11
    return 0;
}
