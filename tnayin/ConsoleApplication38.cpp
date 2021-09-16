#include <iostream>
#include<process.h>
using namespace std;
int main()
{
	int array[100], i, pos, n, temp;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> array[i];
	pos = n - 1;
	while (array[pos] == 0)
		pos--;
	i = 0;
	while (i < pos) {
		if (array[i] == 0) {
			temp = array[i];
			array[pos] = temp;
			while (array[pos] == 0)
				pos--;
		}
		i++;
	}
	for (i = 0; i < n; i++)
		cout << array[i] << " ";
	return 0;
}