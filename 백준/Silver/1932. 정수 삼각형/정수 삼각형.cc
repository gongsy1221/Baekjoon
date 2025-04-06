#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int dp[501][501];
int arr[501][501];
int main()
{
    int n, maxVal = 0;
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> arr[i][j];
		}
	}

	dp[0][0] = arr[0][0];
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + arr[i + 1][j]);
			dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + arr[i + 1][j + 1]);
		}

	}

	for (int i = 0; i < n; i++)
	{
		maxVal = max(maxVal, dp[n - 1][i]);
	}

	cout << maxVal;
}