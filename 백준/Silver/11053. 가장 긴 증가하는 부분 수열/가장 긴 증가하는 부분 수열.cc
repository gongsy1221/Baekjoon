#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001] = { 0 };
int dp[1001] = { 0 };

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fill(dp, dp + n, 1);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
                dp[i] = max(dp[j] + 1, dp[i]);
        }
    }

    cout << *max_element(dp, dp + n);
}