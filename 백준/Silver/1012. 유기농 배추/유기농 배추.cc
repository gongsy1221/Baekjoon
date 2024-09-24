#include <iostream>
#include <math.h>
using namespace std;

int testcase, M, N, num, x, y;
int board[51][51];
bool visited[51][51];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void DFS(int y, int x)
{
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
		if (!visited[ny][nx] && board[ny][nx] == 1)
		{
			DFS(ny, nx);
		}
	}
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> testcase;
	while (testcase--)
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);
		int cnt = 0;
		cin >> M >> N >> num;
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (!visited[i][j] && board[i][j] == 1)
				{
					DFS(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}
}