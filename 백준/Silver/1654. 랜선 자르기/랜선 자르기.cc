#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long k, n;
	cin >> k >> n;
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + k);

	long long left = 1, right = arr[k - 1], mid, sum = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		for (int i = 0; i < k; i++)
		{
			sum += arr[i] / mid;
		}

		if (sum < n)
			right = mid - 1;
		else
			left = mid + 1;

		sum = 0;
	}

	cout << right;
}