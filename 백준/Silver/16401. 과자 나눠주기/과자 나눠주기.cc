#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<long long> v;
    long long m, n, x;
    cin >> m >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    long long left = 1;
    long long right = v[n - 1];
    long long mid, cnt;
    long long result = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;
        cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cnt += v[i] / mid;
        }

        if (cnt < m)
        {
            right = mid - 1;
        }
        else
        {
            result = mid;
            left = mid + 1;
        }
    }

    cout << result << endl;
    return 0;
}
