#include <iostream>
using namespace std;
void rec(int, int, int, int);
int main()
{
	int n;
	cin >> n;
	rec(n, 1, 2, 3);
	return 0;
}
void rec(int n, int i, int j, int w) {
	if (n > 1) {
		rec(n - 1, i, w, j);
		rec(1, i, j, w);
		rec(n - 1, w, j, i);
	}
	else {
		cout << i << " " << j << "\t";
		return;
	}
}
