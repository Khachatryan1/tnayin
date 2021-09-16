#include <iostream>
using namespace std;
int main()
{
	int sum, n, ch;
	sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> ch;
		if (ch >= 0) continue;
		sum += ch;
	}
	cout << sum;
	return 0;
}
