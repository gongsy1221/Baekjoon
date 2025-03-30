#include <iostream>
#include<algorithm>
using namespace std;

int dp[100001];
int c[101];
int main()
{
    int n, k;
    cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	fill(dp, dp + k + 1, 100001);
	dp[0] = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = c[i]; j <= k; j++)
		{
			dp[j] = min(dp[j], dp[j - c[i]] + 1);
		}
	}
	
	if (dp[k] == 100001)
		cout << -1;
	else
		cout << dp[k];
}