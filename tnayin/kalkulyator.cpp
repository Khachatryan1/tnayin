#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char z;
	cin >> a >> z >> b;
	if (z == '-') {
		cout << (a - b);
	}
	else if (z == '+') {
		cout << (a + b);
	}
	else if (z == '*') {
		cout << (a * b);
	}
	else {
		cout << (a / b);
	}
	return 0;
}