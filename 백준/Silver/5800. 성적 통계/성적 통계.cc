#include <iostream>
#include <algorithm>
using namespace std;

int arr[51];

int main()
{
    int k, n, cnt =1;
    cin >> k;

    while (k--)
    {
        int gap = 0, sum = 0;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for (int i = 0; i < n-1; i++)
        {
            if (arr[i + 1] - arr[i] > gap)
                gap = arr[i + 1] - arr[i];
        }

        cout << "Class " << cnt << '\n';
        cout << "Max " << arr[n - 1] << ", Min " << arr[0] << ", Largest gap " << gap << '\n';

        cnt++;
    }
}