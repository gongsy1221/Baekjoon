#include <iostream>
using namespace std;

int dp[100001];

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m, x, y;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> dp[i];
        dp[i] += dp[i - 1];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        cout << dp[y] - dp[x - 1] << '\n';
    }
}