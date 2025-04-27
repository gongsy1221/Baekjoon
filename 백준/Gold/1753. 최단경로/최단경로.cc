#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define MAX 20010
#define INF 0x7FFFFFFF

vector<pair<int, int>> vertex[MAX];
int dist[MAX], V, E, start;

void solution()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, start));
    dist[start] = 0;

    while (!pq.empty())
    {
        int cost = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if (dist[cur] < cost) continue; // ★ 이 줄 추가해야 double free 방지!

        for (int i = 0; i < vertex[cur].size(); i++)
        {
            int next = vertex[cur][i].first;
            int ncost = vertex[cur][i].second;
            if (dist[next] > cost + ncost)
            {
                dist[next] = cost + ncost;
                pq.push(make_pair(dist[next], next));
            }
        }
    }

    for (int i = 1; i <= V; i++)
    {
        if (dist[i] == INF)
            cout << "INF" << '\n';
        else
            cout << dist[i] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E;
    cin >> start;

    int u, v, w;
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        vertex[u].push_back(make_pair(v, w));
    }

    for (int i = 1; i <= V; i++)
        dist[i] = INF;

    solution();
}
