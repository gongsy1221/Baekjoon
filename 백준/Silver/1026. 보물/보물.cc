#include <iostream>
#include <algorithm>
using namespace std;
int arr1[50];
int arr2[50];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	sort(arr1, arr1 + n);

	for (int i = 0; i < n; i++)
		cin >> arr2[i];
	sort(arr2, arr2 + n);

	for (int i = 0; i < n; i++)
		sum += arr1[i] * arr2[n-i-1];

	cout << sum;
}