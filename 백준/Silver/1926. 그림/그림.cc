#include <iostream>
#include<algorithm>
#include <cstring>
using namespace std;

int n, m, maxVal, val;
int board[501][501];
bool visited[501][501];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void DFS(int y, int x)
{
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || nx >= m|| ny >= n) continue;
		if (!visited[ny][nx] && board[ny][nx] == 1)
		{
			val++;
			DFS(ny, nx);
		}
	}
	return;
}

int main()
{
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visited[i][j] && board[i][j] == 1)
			{
				val = 1;
				DFS(i, j);
				cnt++;
				if (maxVal < val)
					maxVal = val;
			}
		}
	}

	cout << cnt << '\n' << maxVal;
}