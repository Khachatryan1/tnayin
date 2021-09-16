#include <iostream>
using namespace std;
int main()
{
	int n, i, min, max, min_pos, max_pos, array[100], p, k, kol;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> array[i];
	min = array[0];
	min_pos = 0;
	for (i = 0; i < n; i++)
		if (array[i] < min) {
			min = array[i];
			min_pos = i;
		}
	max = array[0];
	max_pos = 0;
	for (i = 0; i < n; i++)
		if (array[i] > max) {
			max = array[i];
			max_pos = i;
		}
	if (min_pos < max_pos) {
		p = min_pos;
		k = max_pos;
	}
	else {
		p = max_pos;
		k = min_pos;
	}
	kol = 0;
	for (i = p + 1; i < k; i++)
		if (array[i] % 2 == 0)
			kol++;
	cout << kol;
	return 0;
}

