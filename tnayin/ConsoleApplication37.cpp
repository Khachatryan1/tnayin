#include <iostream>
#include<process.h>
using namespace std;
int array[100], length, max_long, i, pos, size, number;
void rec(pos) {
	if (pos == size) {
		if (max_long == 0)
			cout << max_long << " " << number;
		exit(1);
	}
	if (array[pos + 1] == array[pos]) {
		length++;
		rec(pos + 1);
	}
	else
		if (length > max_long) {
			max_long = length;
			number = array[pos];
			length = 1;
		}
	length = 1;
	rec(pos + 1);
}
int main()
{
	cin >> size;
	for (i = 0; i < size; i++)
		cin >> array[i];
	max_long = 1;
	length = 1;
	rec(0);
	return 0;
}