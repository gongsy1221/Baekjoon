#include <iostream>
#include<algorithm>
#include <cstring>
using namespace std;

int n;
string board[101];
bool visited[101][101];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void DFS(int y, int x)
{
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
		if (!visited[ny][nx] && board[ny][nx] == board[y][x])
		{
			DFS(ny, nx);
		}
	}
	return;
}

int main()
{
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> board[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				DFS(i, j);
				cnt++;
			}
		}
	}

	cout << cnt << ' ';
	cnt = 0;
	memset(visited, 0, sizeof(visited));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 'G')
			{
				board[i][j] = 'R';
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				DFS(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;
}