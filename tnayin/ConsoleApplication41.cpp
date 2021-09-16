#include <iostream>
using namespace std;
int list[100], before_start, i, n, m, start;
void find();
int main()
{
	cin >> n >> m;
	for (i = 0; i < n - 1; i++)
		list[i] = i + 1;
	list[n - 1] = 0;
	while (start != list[start]) {
		find();
		list[before_start] = list[start];
		start = list[start];
	}
	cout << (start + 1);
	return 0;
}
void find() {
	for (i = 0; i < m - 1; i++) {
		before_start = start;
		start = list[start];
	}
}

