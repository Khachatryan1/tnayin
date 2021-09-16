#include<stdio.h>
#include <iostream>
using namespace std;
void shell_sort(int array[], int n) {
	int temp, middle, i, change;
	middle = n / 2;
	do {
		do {
			change = 0;
			for (i = 0; i < n - middle; i++)
				if (array[i] > array[i + middle]) {
					temp = array[i];
					array[i] = array[i + middle];
					array[i + middle] = temp;
					change = 1;
				}
		} while (change);
	} while (middle != middle / 2);
}
int main()
{
	int array[100], i, size;
	cin >> size;
	for (i = 0; i < size; i++)
		cin >> array[i];
	shell_sort(array, size);
	for (i = 0; i < size; i++)
		printf("%d", array[i]);
	return 0;
}
