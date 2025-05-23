#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, m;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(), v.end());

    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = i + 1; j < n && j < i + 5; j++)
        {
            if (v[j] - v[i] < 5)
                k++;
            else
                break;
        }

        ans = max(ans, k);
    }

    if (ans >= 5)
        cout << 0;
    else
        cout << 5 - ans << '\n';
}