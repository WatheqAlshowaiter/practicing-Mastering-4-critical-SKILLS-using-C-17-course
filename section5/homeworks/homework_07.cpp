#include <iostream>
using namespace std;

int main()
{
    /**
     *   A) Their average
        ○ B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
        ○ C) The average of the first 3 numbers divided by the average of the last 2 numbers.
    */
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    cout << (a + b + c + d + e) / 5 << "\n";
    cout << (a + b + c) / (d + e) << "\n";
    cout << ((a + b + c) / 3) / ((d + e) / 2) << "\n";
}
