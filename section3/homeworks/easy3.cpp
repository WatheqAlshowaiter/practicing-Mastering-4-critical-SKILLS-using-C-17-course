#include <iostream>
using namespace std;

int main()
{
    int even1, even2, even3, even4;
    int odd1, odd2, odd3, odd4;

    cin >> odd1 >> even1;
    cin >> odd2 >> even2;
    cin >> odd3 >> even3;
    cin >> odd4 >> even4;

    int evenSum = even1 + even2 + even3 + even4;
    int oddSum = odd1 + odd2 + odd3 + odd4;

    cout << evenSum << " " << oddSum << "\n";

    return 0;
}