#include <iostream>
#include <queue>
using namespace std;

int board[1001][1001];
int dist[1001][1001];
bool visited[1001][1001];
int row, col;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

queue<pair<int, int>> que;

void BFS() {
    while (!que.empty()) 
    {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        for (int i = 0; i < 4; i++) 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= row || ny < 0 || ny >= col) continue;
            if (!visited[nx][ny] && board[nx][ny] == 0) 
            {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                que.push({ nx, ny });
            }
        }
    }
}

int main() 
{
    cin >> col >> row;
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> board[i][j];
            if (board[i][j] == 1) 
            {
                que.push({ i, j });
                visited[i][j] = true;
            }
        }
    }

    BFS();

    int maxDay = 0;
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            if (board[i][j] == 0 && !visited[i][j]) 
            {
                cout << -1;
                return 0;
            }
            maxDay = max(maxDay, dist[i][j]);
        }
    }

    cout << maxDay;
}
