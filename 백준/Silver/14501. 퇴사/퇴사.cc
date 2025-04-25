#include <iostream>
#include <algorithm>
using namespace std; 

int t[17];
int p[17];
int dp[17];

int main()
{   
	int n; 
	cin >> n;  

	for (int i = 1; i <= n; i++)
	{
		cin >> t[i] >> p[i];
	}

	for (int i = n; i > 0; i--)
	{
		if (i + t[i] <= n + 1)
			dp[i] = max(dp[i + 1], dp[i + t[i]] + p[i]);
		else
			dp[i] = dp[i + 1];
	}

	cout << *max_element(dp, dp+n+1);
}