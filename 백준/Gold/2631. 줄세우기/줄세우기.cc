#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int dp[201];
int arr[201];
int main()
{
    int n, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }

        if (max <= dp[i])
            max = dp[i];
    }

    cout << n - max;
}