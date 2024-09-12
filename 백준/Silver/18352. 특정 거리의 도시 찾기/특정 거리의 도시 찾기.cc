#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, K, X;
vector<vector<int>>adj;
vector<int>visited;
vector<int>answer;

void BFS(int X)
{
	queue<int>q;
	q.push(X);
	visited[X] = 0;
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int j = 0; j < adj[now].size(); j++)
		{
			int next = adj[now][j];
			if (visited[next] == -1)
			{
				q.push(next);
				visited[next] = visited[now] +1;
				if (visited[next] == K) answer.push_back(next);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> K >> X;
	adj.resize(N + 1);

	visited.resize(N + 1, -1);
	int n1, n2;

	for (int i = 0; i < M; i++)
	{
		cin >> n1 >> n2;
		adj[n1].push_back(n2);
	}
	BFS(X);
	sort(answer.begin(), answer.end());
	if (answer.empty()) cout << -1;
	else
	{
		for (auto n : answer)
		{
			cout << n << "\n";
		}
	}
}