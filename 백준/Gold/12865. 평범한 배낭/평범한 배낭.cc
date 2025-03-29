#include <iostream>
#include<algorithm>
using namespace std;

int dp[100001];
int w[101];
int v[101];

int main()
{
    int n, k;
    cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i] >> v[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = k; j >= w[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	
	cout << dp[k];
}