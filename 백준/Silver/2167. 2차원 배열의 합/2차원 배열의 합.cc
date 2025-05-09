#include <iostream>
#include <algorithm>
using namespace std;

int arr[301][301];

int main()
{
	int n, m, k;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}

	cin >> k;
	while (k--)
	{
		int sum = 0;
		int i, j, x, y;
		cin >> i >> j >> x >> y;

		for (int a = i; a <= x; a++)
		{
			for (int b = j; b <= y; b++)
			{
				sum += arr[a][b];
			}
		}
		cout << sum << '\n';
	}
}