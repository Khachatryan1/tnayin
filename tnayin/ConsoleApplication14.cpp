#include <iostream>
using namespace std;
int main()
{

	int N, kol_zero, kol_one;
	cin >> N;
	while (N != 0) {
		if (N % 2 == 0) {
			kol_zero++;
		}
		else {
			kol_one++;
			N /= 2;
		}
	}setlocale(LC_ALL, "ru");
	cout << "количество нолей " << kol_zero;
	cout << "количество единиц " << kol_one;
	return 0;
}
