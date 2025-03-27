#include <iostream>
using namespace std;

int arr[100001];

int main() 
{
	int n, k, result = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += arr[i];

	result = sum;

	for (int i = 1; i <= n - k; i++)
	{
		sum = sum - arr[i - 1] + arr[i + k - 1];
		if (sum > result)
			result = sum;
	}

	cout << result;
}