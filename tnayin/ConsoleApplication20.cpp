#include <iostream>
#include<math.h>
using namespace std;
void fibonachi(int, int&);
void test(int, int&);
int main()
{
	int n, number;
	int& my_res = number;
	int p;
	int& m = p;
	cin >> n;
	fibonachi(n, number);
	cout << number << endl;
	test(number, p);
	if (p == 1) {
		cout << "no";
	}
	else {
		cout << "yes";
	}
	return 0;
}
void fibonachi(int k, int& my_res) {
	float x, y, f, g;
	int i;
	x = (1 - sqrt(5)) / 2;
	y = (1 + sqrt(5)) / 2;
	g = f = 1;
	for (i = 0; i < k; i++) {
		f *= x;
		g *= y;
	}
	my_res = fabs(f - g) / 2;
}
void test(int l, int& m) {
	int last = 0, temp = 0;
	last = l % 10;
	l /= 10;
	temp = l % 10;
	if (l == 0) return;
	if (last < temp) {
		m = 1;
		return;
	}
	test(l, m);
}


















