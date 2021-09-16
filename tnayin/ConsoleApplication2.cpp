#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
	switch (n){
	case 1 + 5:cout << "YES"; break;
	case 1 + 10:cout << "YES"; break;
	case 10 + 5:cout << "YES"; break;
	default:cout << "NO";
		break;
	}
    return 0;
}

