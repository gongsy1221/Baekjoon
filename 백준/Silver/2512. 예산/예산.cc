#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<long long> v;
	long long n, m, x;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	cin >> m;

	sort(v.begin(), v.end());

	long long left = 0, right = v[n-1], mid, sum;
	while (left <= right)
	{
		sum = 0;
		mid = (right + left) /2;

		for (int i = 0; i < n; i++)
		{
			sum += min(v[i], mid);
		}

		if (sum > m)
			right = mid -1;
		else
			left = mid +1;
	}

	cout << right;
}