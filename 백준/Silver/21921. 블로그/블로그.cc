#include <iostream>
using namespace std;

int arr[250001];

int main() 
{
	int n, k, result = 0, cnt = 1;
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
		if (sum == result)
			cnt++;
		if (sum > result)
		{
			cnt = 1;
			result = sum;
		}
	}

	if (result == 0)
		cout << "SAD";
	else
	    cout << result << endl << cnt;
}