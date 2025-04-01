#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int dp[204][204];
int main()
{
    int n, k;
    cin >> n >> k;
	for (int i = 0; i <= n; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= k; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
			for (int z = 0; z <= j; z++) 
			{
				dp[i][j] += dp[i - 1][z];
				dp[i][j] %= 1000000000;
			}
		}
	}

	cout << dp[k][n];
}