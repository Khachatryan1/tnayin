#include <iostream>
using namespace std;
int main()
{
	int array[100], size, n, min_pos, i, start, min, temp, k, t;
	int sum;
	cin >> n >> k >> t;
	for (i = 0; i < n; i++)
		cin >> array[i];
	start = 0;
	while (start != n - 1) {
		min = array[start];
		min_pos = start;
		for (i = start; i < n; i++)
			if (array[i] < min) {
				min = array[i];
				min_pos = i;
			}
		if (min_pos != start) {
			temp = array[start];
			array[start] = array[min_pos];
			array[min_pos] = temp;
		}
		start++;
	}
	sum = 0;
	for (i = 0; i < k; i++)
		sum += array[i];
	if (sum > t)
		cout << "no";
	else
		cout << "yes";
	return 0;
}

