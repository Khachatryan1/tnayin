#include <iostream>
using namespace std;
int main()
{
	int a, b, copy_a;
	cin >> a;
	copy_a = a;
	b = 0;
	while (copy_a != 0) {
		b = b * 10 + copy_a % 10;
		copy_a /= 10;
	}
	if (a == b) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

