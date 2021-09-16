#include <iostream>
using namespace std;
const int n = 4;
const int m = 4;
int array[n + 2][m + 2] = { {-1,-1,-1,-1,-1,-1},
							{-1,0,0,-1,-1,-1},
							{-1,0,-1,0,0,-1},
							{-1,-1,0,-1,0,-1},
							{-1,0,-1,-1,-1,-1},
							{-1,-1,-1,-1,-1,-1} };
int queue[2][m * n];
int start, last;
int label, i, j, p, a, b;
void add(int x, int y);
void find() {
	p = 0;
	for (i = 1; i <= n && p == 0; i++)
		for (j = 1; j <= m && p == 0; j++)
			if (array[i][j] == 0) {
				p = 1;
				add(i, j);
			}
}
void test(){
label++;
	while (start != last) {
			a = queue[0][start];
			b = queue[1][start];
			if (array[a + 1][b] == 0) add(a + 1, b);
			if (array[a - 1][b] == 0) add(a - 1, b);
			if (array[a][b + 1] == 0) add(a, b + 1);
			if (array[a][b - 1] == 0) add(a, b - 1);
			start++;
		}
	}

int main()
{
	start = 0;
	last = 0;
	label = 0;
	p = 1;
	do {
		find();
		if (p == 1) test();
	} while (p == 1);
	cout << label;
	return 0;
}
void add(int x, int y) {
	queue[0][last] = x;
	queue[1][last] = y;
	array[x][y] = label;
	last++;
}