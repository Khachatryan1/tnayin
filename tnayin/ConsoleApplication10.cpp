#include <iostream>
using namespace std;
int main()
{
    int n, my_res;
    my_res = 1;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        my_res = my_res* i;
    }
    cout << my_res;
    return 0;
}

