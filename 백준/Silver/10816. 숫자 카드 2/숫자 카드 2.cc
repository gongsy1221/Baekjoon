#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[5000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, num =0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + a);

	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> num;
		if (lower_bound(arr, arr + a, num) != upper_bound(arr, arr + a, num))
		{

			cout << upper_bound(arr, arr + a, num) - lower_bound(arr, arr + a, num) << " ";
		}
		else
			cout << 0 << " ";
	}
}