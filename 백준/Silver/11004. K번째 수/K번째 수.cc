#include <iostream>
#include <algorithm>
using namespace std;
int arr[5000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, tmp, i ,j;
	cin >> a >> b;
	for (i = 0; i < a; i++)
		cin >> arr[i];
	sort(arr, arr + a);
	cout << arr[b -1];
}