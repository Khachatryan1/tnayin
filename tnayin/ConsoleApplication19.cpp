#include <iostream>
using namespace std;
void nod(int, int);
int main()
{
	int k, l;
	cin >> k >> l;
	nod(k, l);
	return 0;
}
void nod(int a, int b) {
	if (a > b) {
		a = a - b;
	}
	else {
		b = b - a;
	}
	if (b == 0){
		cout << a;
		return;
	}
	nod(a, b);
}
