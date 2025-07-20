#include <iostream>
using namespace std;

int arr[1001][1001], n, m, dir, ty, tx, y, x;

const int dy[] = { 1, 0, -1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main() 
{
    cin >> n >> m;
    for (int i = n * n; i > 0; i--) 
    {
        arr[y][x] = i;

        if (i == m)
        {
            ty = y + 1; 
            tx = x + 1;
        }

        if (y + dy[dir] < 0 || y + dy[dir] >= n || x + dx[dir] < 0 || x + dx[dir] >= n || arr[y + dy[dir]][x + dx[dir]] != 0)
            dir = (dir + 1) % 4;

        y = y + dy[dir];
        x = x + dx[dir];
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << ty << ' ' << tx;
}