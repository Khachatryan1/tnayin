#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cin >> n;
	if (n >= 3 && n <= 5) {
		cout << "весна" << endl;
	}
	else if (n >= 6 && n <= 8) {
		cout << "лето" << endl;
	}
	else if (n >= 9 && n <= 11) {
		cout << "осень" << endl;
	}
	else {
		cout << "зима" << endl;
	}
	return 0;
}

