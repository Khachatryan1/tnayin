#include <iostream>
using namespace std;
int main()
{
	int array[100], size, x, y, temp, i;
	cin >> size;
	for (x = 0; x < size; x++) {
		cin >> array[x];
	}
	for (x = 0; x < size - 1; x++) 
		for (y = x + 1; y < size; --y) 
	if (array[x] > array[y]) {
		temp = array[x];
		array[x] = array[y];
		array[y] = temp;
		}
	for (i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	return 0;
}