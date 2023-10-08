#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << __cplusplus;

    // in previous C++ it is a compile error
    // in C++ 17 result will be: "5 5"
    cout << x << " " << x++;

    return 0;
}
