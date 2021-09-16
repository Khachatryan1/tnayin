#include <iostream>
using namespace std;
int array[10000];
void quicksort(long high, long low) {
	long i, j;
	int temp, p;
	i = low;
	j = high;
	p = array[(low + high) / 2];
	do {
		while (array[i] > p)
			i++;
		while (array[j] < p)
			j--;
		if (i <= j) {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j++;
		}
	} while (i <= j);
	if (j > low)
		quicksort(j, low);
	if (high > i)
		quicksort(high, i);
}
int main()
{
	int size, i;
	cin >> size;
	for (i = 0; i < size; i++)
		cin >> array[i];
	quicksort(size - 1, 0);
	for (i = 0; i < size; i++)
		cout << array[i] << " ";
	return 0;
}

