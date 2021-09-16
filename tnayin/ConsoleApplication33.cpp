#include <iostream>
#include<stdlib.h>
using namespace std;
int a[100], b[100], c[100];
void input();
void done(int, int);
void output(int);
void input() {
	char* temp, s[100];
	int i, j, len_1, len_2, pos;
	cin >> s;
	i = strnlen(s) - 1;
	temp == "";
	pos = 0;
	while (i >= 0) {
		*temp = s[i];
		a[pos] = atoi(temp);
		pos++;
		--i;
	}
	len_1 = pos;
	pos = 0;
	cin >> s;
	i = strlen(s) - 1;
	temp == "";
	pos = 0;
	while (i >= 0) {
		*temp = s[i];
		b[pos] = atoi(temp);
		pos++;
		--i;
	}
	len_2 = pos;
	done(len_1, len_2);
}
void done(int len_1, int len_2) {
	int i, k, j;
	if (len_1 > len_2)
		k = len_1;
	else
		k = len_2;
	for (i = 0; i < len_1; i++)
		for (j = 0; j < len_2; j++) {
			c[i + j] = c[i + j] + a[i] * b[j];
			if (c[i + j] > 9) {
				c[i + j + 1] += (c[i + j] / 10);
				c[i + j] %= 10;
			}
		}
	output(k);
}
void output(int k) {
	int i;
	k += k;
	while (c[k] == 0 && k > 0)
		k--;
	for (i = k; i >= 0; i--)
		cout << c[i];
	return;
}
int main()
{
	input();
	return 0;
}