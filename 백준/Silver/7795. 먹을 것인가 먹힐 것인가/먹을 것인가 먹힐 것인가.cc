#include <iostream>
#include <algorithm>
using namespace std;
int arr[20000];
int main()
{
	int t , num = 0, cnt = 0, n ,m;
	cin >> t;
	while (t!=0)
	{
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);

		for (int i = 0; i < m; i++)
		{
			cin >> num;
			cnt += (arr+n) - upper_bound(arr, arr + n, num);
		}

		cout << cnt << "\n";
		cnt = 0;
		t--;
	}
}