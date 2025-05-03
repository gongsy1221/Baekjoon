#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> v;

int main()
{
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	for (int i = 0; i < n; i++)
	{
		int cnt = 1;

		for (int j = 0; j < n; j++)
		{
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				cnt++;
		}
		cout << cnt << ' ';
	}
}