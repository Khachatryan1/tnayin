#include <iostream>
#include<process.h>
using namespace std;
int i, ch, n, my_res;
void factorial(int ch);
int main()
{
	cin >> n;
	my_res = 1;
	factorial(n);
	return 0;
}
void factorial(int ch) {
	if (ch == 1) {
		cout << my_res;
		exit(1);
	}
	my_res *= ch;
	factorial(ch - 1);
}
