#include <iostream>
using namespace std;
int arr[8][8], x, y, x1, y1, i, j, a, b, start, last;
int queue[2][64];
int main()
{
	cin >> x >> y >> x1 >> y1;
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			arr[i][j] = -1;
	arr[x][y] = 0;
	queue[0][0] = x;
	queue[1][0] = y;
	start = 0;
	last = 1;
	while (start != last && arr[x1][y1] == -1) {
		a = queue[0][start];
		b = queue[1][start];
		if (arr[a + 2][b - 1] == -1 && a + 2 < 8 && b - 1 < 8) {
			queue[0][last] = a + 2;
			queue[1][last] = b - 1;
			last++;
			arr[a + 2][b - 1] = arr[a][b] + 1;
		}
		if (arr[a + 2][b + 1] == -1 && a + 2 < 8 && b + 1 < 8) {
			queue[0][last] = a + 2;
			queue[1][last] = b + 1;
			last++;
			arr[a + 2][b + 1] = arr[a][b] + 1;
		}
		if (arr[a - 2][b + 1] == -1 && a - 2 < 8 && b + 1 < 8) {
			queue[0][last] = a - 2;
			queue[1][last] = b + 1;
			last++;
			arr[a - 2][b + 1] = arr[a][b] + 1;
		}
		if (arr[a - 2][b - 1] == -1 && a - 2 < 8 && b - 1 < 8) {
			queue[0][last] = a - 2;
			queue[1][last] = b - 1;
			last++;
			arr[a - 2][b - 1] = arr[a][b] + 1;
		}
		if (arr[a - 1][b + 2] == -1 && a - 2 < 8 && b + 2 < 8) {
			queue[0][last] = a - 1;
			queue[1][last] = b + 2;
			last++;
			arr[a - 1][b + 2] = arr[a][b] + 1;
		}
		if (arr[a + 1][b + 2] == -1 && a + 1 < 8 && b + 2 < 8) {
			queue[0][last] = a + 1;
			queue[1][last] = b + 2;
			last;
			arr[a + 1][b + 2] = arr[a][b] + 1;
		}
		if (arr[a + 1][b - 2] == -1 && a + 1 < 8 && b - 2 < 8) {
			queue[0][last] = a + 1;
			queue[1][last] = b - 2;
			last++;
			arr[a + 1][b - 2] = arr[a][b] + 1;
		}
		if (arr[a - 1][b - 2] == -1 && a + 1 < 8 && b - 2 < 8) {
			queue[0][last] = a - 1;
			queue[1][last] = b - 2;
			last++;
			arr[a - 1][b - 2] = arr[a][b] + 1;
		}
		start++;
	}
	cout << arr[x1][y1];
	return 0;
}