#include <iostream>
#include <algorithm>
using namespace std;

int A[301][301], B[601][601], H, W, X, Y;

int main()
{
	cin >> H >> W >> X >> Y;

	for (int i = 1; i <= H + X; i++)
	{
		for (int j = 1; j <= W + Y; j++)
		{
			cin >> B[i][j];
		}
	}

	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			A[i][j] = B[i][j];
			if (i > X && j > Y)
				A[i][j] -= A[i - X][j - Y];
		}
	}

	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			cout << A[i][j] << ' ';
		}
		cout << '\n';
	}
}