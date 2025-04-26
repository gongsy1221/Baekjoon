#include <iostream>
#include <algorithm>
using namespace std;

void binarySearch(int num);

int arr[1000001];
int n, m;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		cin >> n;
		int num;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);

		cin >> m;

		for (int i = 0; i < m; i++)
		{
			cin >> num;
			binarySearch(num);
		}
	}
}

void binarySearch(int num)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == num)
		{
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] > num)
			right = mid - 1;
		else if (arr[mid] < num)
			left = mid + 1;
	}
	cout << 0 << "\n";
}