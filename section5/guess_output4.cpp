#include <iostream>
using namespace std;

int main()
{
    cout << true && false; // 1 because << has higher precedence that &&. This is parsed as: (cout << true) && false.You should use: cout << (true && false);

    return 0;
}