#include <iostream>
#include<stdlib.h>
using namespace std;
int a[100], b[100], c[100];
void input();
void max(int, int);
void done(int, int, int);
void output(int, int);
void input() {
	char* temp, s[100];
	int i, j, len_1, len_2, pos;
	cin >> s;
	len_1 = strlen(s);
	i = len_1 - 1;
	temp == "";
	pos = 0;
	while (i >= 0) {
		*temp = s[i];
		a[pos] = atoi(temp);
		pos++;
		--i;
	}
	cin >> s;
	len_2 - 1;
	temp == "";
	pos = 0;
	while (i >= 0) {
		*temp = s[i];
		b[pos] = atoi(temp);
		pos++;
		--i;
	}
	max(len_1, len_2);
}
void max(int len_1, int len_2) {
	int i, p;
	if (len_1 > len_2) {
		p = 1;
		done(len_1, len_2, p);
		return;
	}
	if (len_1 < len_2) {
		p = 2;
		
	}
	p = 1;
	for (i = len_1 - 1; i >= 0; i--) {
		if (a[i] < b[i]) {
			p = 2;
			
		}
		if (a[i] > b[i]) {
			done(len_1, len_2, p);
			return;
		}
	}
			done(len_1, len_2, p);
			return;
}
void done(int len_1, int len_2, int p) {
	int i, w, k;
	if (len_1 > len_2)
		k = len_1;
	else k = len_2;
	if (p == 2)
		for (i = 0; i < k; i++) {
			w = a[i];
			a[i] = b[i];
			b[i] = w;
		}
	for (i = 0; i < k; i++) {
		c[i] = a[i] - b[i] + c[i];
		if (c[i] < 0) {
			c[i + 1] -= 1;
			c[i] += 10;
		}
	}
	output(k, p);
}
void output(int k, int p) {
	int i;
	while (c[k] == 0 && k > 0)
		k--;
	if (p == 2)
		cout << "-";
	for (i = k; i >= 0; i--)
		cout << c[i];
	return;
}
int main()
{
	input();
	return 0;
}
