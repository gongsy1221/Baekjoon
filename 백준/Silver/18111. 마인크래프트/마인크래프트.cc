#include <iostream>
using namespace std;

int n, m, b;
int board[501][501];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m >> b;

	int mintime = 1e9;
	int maxheight = -1;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	for (int h = 0; h <= 256; h++)
	{
		int inven = 0;
		int remove = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int diff = board[i][j] - h;
				if (diff > 0)
					remove += diff;
				else
					inven -= diff;
			}
		}

		if (remove + b >= inven)
		{
			int time = 2 * remove + inven;
			if (mintime >= time)
			{
				mintime = time;
				maxheight = h;
			}
		}
	}
	cout << mintime << ' ' << maxheight;
}