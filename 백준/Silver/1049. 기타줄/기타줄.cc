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

	int n, m,n2 =0 , value = 1001;
	cin >> n >> m;

	if (n % 6 == 0)
		n2 = n / 6;
	else
		n2 = (n / 6) + 1;

	for (int i = 0; i < m; i++)
		cin >> arr1[i] >> arr2[i];

	sort(arr1, arr1 + m);
	sort(arr2, arr2 + m);

	value = 
		min(arr1[0] * n2, min(arr2[0] * n, (arr1[0] *(n2-1)) + arr2[0] * (n - ((n2 -1)*6))));

	cout << value;
}