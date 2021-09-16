#include <iostream>
using namespace std;
int main()
{
	int array[100], size, max, max_pos, i, start, max, temp;
	cin >> size;
	for (i = 0; i < size; i++)
		cin >> array[i];
	start = 0;
	while (start != size - 1) {
		max = array[start];
		max_pos = start;
		for (i = start; i < size; i++)
			if (array[i] > max) {
				max = array[i];
				max_pos = i;
			}
		if (max_pos != start) {
			temp = array[start];
			array[start] = array[max_pos];
			array[max_pos] = temp;
		}
		start++;
	}
	for (i = 0; i < size; i++)
		cout << array[i] << " ";
	return 0;
}

