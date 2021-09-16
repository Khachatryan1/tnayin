#include <iostream>
using namespace std;
int rec(int);
int sum_p, sum_l, sum;
int main()
{
	int k, l;
	cin >> k >> l;
	sum_p = rec(k);
	sum_l = rec(l);
	if (sum_p > sum_l) {
		cout << k;
	}
	else {
		cout << l;
	}
	return 0;
}
int rec(int number) {
	sum += number % 10;
	if (number == 0)
		return sum;
	rec(number);
}
