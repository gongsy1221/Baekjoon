#include <iostream>
using namespace std;

int dp[1000001];
int arr[1000001];

int main()
{
    int n;
    cin >> n;

    dp[1] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; i++) 
    {
        dp[i] = dp[i - 1] + 1;
        arr[i] = i - 1;

        if (i % 2 == 0 && dp[i / 2] + 1 < dp[i]) 
        {
            dp[i] = dp[i / 2] + 1;
            arr[i] = i / 2;
        }

        if (i % 3 == 0 && dp[i / 3] + 1 < dp[i]) 
        {
            dp[i] = dp[i / 3] + 1;
            arr[i] = i / 3;
        }
    }

    cout << dp[n] << "\n";

    if (n != 0) cout << n << ' ';

    while (n != 1) 
    {
        cout << arr[n] << " ";
        n = arr[n];
    }
    
}