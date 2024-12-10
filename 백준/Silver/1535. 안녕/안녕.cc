#include <iostream>
using namespace std;
int dp[101];
int L[21];
int J[21];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> L[i];
    for (int i = 0; i < n; i++)
        cin >> J[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 100; j >= L[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - L[i]] + J[i]);
        }
    }

    cout << dp[99];
}