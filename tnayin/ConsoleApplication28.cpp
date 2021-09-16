#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int i, j, n, k, array[1000], help_array[1000];
int main()
{
	cin >> n >> k;
	rand();
	for (i = 0; i < n; i++)
		array[i] = rand(k);
	for (i = 0; i < n; i++)
		help_array[array[i]] += 1;
	for (i = 1; i < k; i++)
		if (help_array != 0)
			for (j = 0; help_array[i]; j++)
				cout << i << " ";
	return 0;
}
