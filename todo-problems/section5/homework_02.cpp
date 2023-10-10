#include <iostream>
using namespace std;

int main()
{

	int a = 1, b = 1, c;

	cout << (c = a + b, a = b, b = c, // c =2, b=2, a=1
			 c = a + b, a = b, b = c, // a=3, b=3,c=3
			 c = a + b, a = b, b = c, // a=3, b=4,c=4
			 c = a + b, a = b, b = c) // a=4, b=7,c=7
		 << endl;

	return 0;
}
