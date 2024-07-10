#include <iostream>
#include <algorithm>
using namespace std;
int dp[10000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0 && dp[i] > (dp[i / 2] + 1))
			dp[i] = (dp[i / 2] + 1);
		if (i % 3 == 0 && dp[i] > (dp[i / 3] + 1))
			dp[i] = (dp[i / 3] + 1);
	}

	cout << dp[n];
}