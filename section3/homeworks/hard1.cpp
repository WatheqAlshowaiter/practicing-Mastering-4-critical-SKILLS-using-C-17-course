#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, temp = -1;
    cin >> n1 >> n2 >> n3;

    temp = n1;
    n1 = n2;
    n2 = n3;
    n3 = temp;

    cout << n1 << " " << n2 << " " << n3;

    return 0;
}
