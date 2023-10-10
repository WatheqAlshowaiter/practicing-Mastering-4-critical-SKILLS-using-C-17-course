#include <iostream>
using namespace std;

int main()
{

	int a = 210;

	a /= 2; // 105
	cout << a << "\n";

	cout << (a /= 3) << "\n"; // 110/3=35
	cout << (a /= 5) << "\n"; // 36/5=7
	cout << (a /= 7) << "\n"; // 7/7=1

	cout << (2 + 3) * (5 - (-3)) / 5 / 8 << "\n"; // 8 /8  =  1

	a = 10;
	cout << a++ + 10 << "\n"; // 10 + 10 = 20
	cout << ++a + 10 << "\n"; // 12+10 = 22
	cout << a-- + 10 << "\n"; // 12 + 10 = 22
	cout << --a + 10 << "\n"; // 10 + 10 = 20

	int b = 20;
	cout << a++ + ++b << "\n"; // Don't code this way 20+21 = 31

	cout << a << "\n"; // 11
	++a += 10;		   // Don't code this way 22
	cout << a << "\n";

	return 0;
}
