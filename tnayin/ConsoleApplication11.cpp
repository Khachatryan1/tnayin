#include <iostream>
using namespace std;
int main()
{
	int a, b, i, j, p;
	cin >> a >> b;
	for (i = a; i <= b; i++) {
		for (j = 2; j < i / 2 + 1; j++) {
			if (i % j == 0) p = 1;
			if (p == 0) {
				cout << i << " ";
			}
			else p = 0;
		}
	}
	return 0;

}

