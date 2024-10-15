#include <iostream>
#include <math.h>
using namespace std;

int arr[45] = { 0,1,1,2 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[n];
}