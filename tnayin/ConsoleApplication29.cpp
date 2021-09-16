#include <iostream>
using namespace std;
int search(int array[], int n, int number) {
	int i = 0;
	while (i != n)
		if (array[i] == number)
			return i;
		else
			i++;
	return -1;
}
int main()
{
	setlocale(LC_ALL,"rus");
	int i, size, numerals[1000], number, p;
	cout << "введите размерность массива!!!" << endl;
	cin >> size;
	cout << "введите елементы массива!!!" << endl;
	for (i = 0; i < size; i++)
		cin >> numerals[i];
	cout << "введите число для поиска!!!" << endl;
	cin >> number;
	p = search(numerals, size, number);
	if (p == -1)
		cout << "no";
	else cout << "yes" << p + 1;
	return 0;
}
