#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, tmp = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + a);

	for (int i = 0; i < a; i++)
	{
		if (tmp == arr[i])
			continue;
		cout << arr[i] << " ";
		tmp = arr[i];
	}
}