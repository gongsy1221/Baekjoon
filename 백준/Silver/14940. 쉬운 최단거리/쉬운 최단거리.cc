#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int m, n;

int board[1001][1001];
int visited[1001][1001];
queue<pair<int, int>> que;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void BFS(int x, int y)
{
	que.push({ x, y });
	visited[x][y] = 0;
	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if (visited[nx][ny] == -1 && board[nx][ny] != 0)
			{
				que.push({ nx,ny });
				visited[nx][ny] = visited[x][y] + 1;
			}
		}
	}
}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;

	int targetx = 0, targety = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			visited[i][j] = -1;

			cin >> board[i][j];
			if (board[i][j] == 2)
			{
				targetx = i;
				targety = j;
			}
		}
	}

	BFS(targetx, targety);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(board[i][j] == 0) 
				cout << 0 << ' ';
			else
				cout << visited[i][j] << ' ';
		}
		cout << endl;
	}
}