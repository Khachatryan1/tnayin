#include <iostream>
using namespace std;
void fun(int a, int b);
int main()
{
	int a, b;
	cin >> a >> b;
	fun(a, b);
	
	return 0;
}
void fun(int a, int b)
{
	cout << (a + b);
}
