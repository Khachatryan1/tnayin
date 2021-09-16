#include <iostream>
using namespace std;
int binary_search(int array[], int n, int number) {
	int left, right, middle;
	left = 0;
	right = n - 1;
	middle = (left + right) / 2;
	while (left <= right) {
		if (array[middle] == number)
			return middle;
		if (array[middle] > number)
			right = middle - 1;
		else left = middle + 1;
		middle = (left | right) / 2;
	}
	return -1;
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, size, numerals[10000], number, pos;
	cout << "введите размер массива!!!" << endl;
	cin >> size;
	for (i = 0; i < size; i++)
		numerals[i] = i;
	cout << "введите число для поиска!!!" << endl;
	cin >> number;
	pos = binary_search(numerals, size, number);
	if (pos == -1)
		cout << "число в массиве отсутствует!!!";
	else cout << "число находится в позиции:" << pos;
	return 0;
}
