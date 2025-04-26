#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int arr[10][10], visited[10][10], n, m, ret;
vector<pair<int, int>> wall, vir;
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };

void DFS(int y, int x)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (visited[ny][nx] || arr[ny][nx] == 1) continue;
		visited[ny][nx] = 1;
		DFS(ny, nx);
	}
}

int go()
{
	memset(visited, 0, sizeof(visited));
	for (pair<int, int> a : vir)
	{
		visited[a.first][a.second] = 1;
		DFS(a.first, a.second);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0 && visited[i][j] == 0)
				cnt++;
		}
	}
	return cnt;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0)
				wall.push_back({ i,j });
			if (arr[i][j] == 2)
				vir.push_back({ i,j });
		}
	}

	int l = wall.size();
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < i; j++)
		{
			for (int k = 0; k < j; k++)
			{
				arr[wall[i].first][wall[i].second] = 1;
				arr[wall[j].first][wall[j].second] = 1;
				arr[wall[k].first][wall[k].second] = 1;
				ret = max(ret, go());
				arr[wall[i].first][wall[i].second] = 0;
				arr[wall[j].first][wall[j].second] = 0;
				arr[wall[k].first][wall[k].second] = 0;
			}
		}
	}

	cout << ret << '\n';
}