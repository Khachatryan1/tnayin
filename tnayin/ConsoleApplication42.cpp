#include <iostream>
using namespace std;
const int n = 5;
const int m = 5;
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, x1, y1, x2, y2, p, i, j, start, last;
	int FIFO[3][n * m], result[2][n * m];
	int arr[n][m] = { {0,1,0,1,0},
					  {0,1,0,1,0},
					  {0,0,0,0,0},
					  {0,0,0,0,1},
					  {0,0,0,0,1} };
	cout << "введите стартовые координаты " << endl;
	cin >> x1 >> y1;
	cout << "введите конечные координаты " << endl;
	cin >> x2 >> y2;
	arr[x1][y1] = -1;
	FIFO[0][0] = x1;
	FIFO[1][0] = y1;
	FIFO[2][0] = 0;
	start = 0;
	last = 1;
	while (x2 != FIFO[0][start] || y2 != FIFO[1][start]) {
		x = FIFO[0][start];
		y = FIFO[1][start];
		if (arr[x + 1][y] == 0 && arr[x + 1][y] == 0 && x + 1 < n) {
			FIFO[0][last] = x + 1;
			FIFO[1][last] = y;
			FIFO[2][last] = start;
			last++;
			arr[x + 1][y] = -1;
		}
		if (arr[x - 1][y] == 0 && arr[x - 1][y] == 0 && x - 1 >= 0) {
			FIFO[0][last] = x - 1;
			FIFO[1][last] = y;
			FIFO[2][last] = start;
			last++;
			arr[x - 1][y] = -1;
		}
		if (arr[x][y + 1] == 0 && arr[x][y + 1] == 0 && y + 1 < n) {
			FIFO[0][last] = x;
			FIFO[1][last] = y + 1;
			FIFO[2][last] = start;
			last++;
			arr[x][y] = -1;
		}
		if (arr[x][y - 1] == 0 && arr[x][y - 1] == 0 && y > 0) {
			FIFO[0][last] = x;
			FIFO[1][last] = y - 1;
			FIFO[2][last] = start;
			last++;
			arr[x][y - 1] = -1;
		}
		start++;
	}
	p = start;
	i = 0;
	while (p != 0) {
		result[0][i] = FIFO[0][p];
		result[1][i] = FIFO[1][p];
		p = FIFO[2][p];
		i++;
	}
	result[0][i] = x1;
	result[1][i] = y1;
	for (j = i; j >= 0; j--)
		cout << result[0][j] << " " << result[i][j] << endl;
	return 0;
}