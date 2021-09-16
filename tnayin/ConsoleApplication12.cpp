#include <iostream>
using namespace std;
int main()
{
    int a, b, c, temp, kol_vo_1, kol_vo_2, kol_vo_3;
    int copy_a, copy_b, copy_c;
    cin >> a >> b >> c;
    kol_vo_1 = 0;
    kol_vo_2 = 0;
    kol_vo_3 = 0;
    copy_a = a;
    copy_b = b;
    copy_c = c;
    while (copy_a != 0) {
        temp = copy_a % 10;
        copy_a /= 10;
        if (temp == 1) {
            kol_vo_1++;
        }
    }
    while (copy_b != 0) {
        temp = copy_b % 10;
        copy_b /= 10;
        if (temp == 1) {
            kol_vo_2++;
        }
    }
    while (copy_c != 0) {
        temp = copy_c % 10;
        copy_c /= 10;
        if (temp == 1) {
            kol_vo_3++;
        }
    }
    if (kol_vo_1 > kol_vo_2 && kol_vo_1 > kol_vo_3) {
        cout << a;
    }
    else if (kol_vo_2 > kol_vo_3) {
        cout << b;
    }
    else {
        cout << c;
    }

    return 0;
}










