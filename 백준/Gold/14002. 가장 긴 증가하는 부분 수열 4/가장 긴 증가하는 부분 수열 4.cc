#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[1001] = { 0 };
int dp[1001] = { 0 };
string lis[1001];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fill(dp, dp + n, 1);
    for (int i = 0; i < n; i++)
    {
        lis[i] = to_string(arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int Max = 0;
        int maxIdx = -1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && Max < dp[j])
            {
                Max = dp[j];
                maxIdx = j;
            }
        }
        dp[i] = Max + 1;
        if (maxIdx != -1)
            lis[i] = lis[maxIdx] + ' ' + to_string(arr[i]);
    }

    cout << *max_element(dp, dp + n) << endl;
    int idx = max_element(dp, dp + n) - dp;
    cout << lis[idx];
}