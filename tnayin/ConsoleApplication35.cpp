#include <iostream>
#include<process.h>
using namespace std;
int i, sum, pos, n, k, l, array[100];
void rec(int pos) {
	l--;
	if (l < 0) {
		cout << sum;
		exit(1);
	}
	sum += array[pos];
	rec(array[pos]);
}
int main()
{
	cin >> n >> k >> l;
	for (i = 0; i < n; i++)
		cin >> array[i];
	sum = 0;
	rec(k);
	return 0;
}

