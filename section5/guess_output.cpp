#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20, z = 3;
    double result;

    x += y += --z *= 9 - 3 - 1;
    // z = 2
    // x += y += z *= 5;
    // z=10
    // x += y += 10; // y =20
    // x = 30
    cout << x << " " << y << " " << z;

    return 0;
}
