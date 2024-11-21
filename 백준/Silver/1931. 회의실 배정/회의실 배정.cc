#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() 
{
	int n, start, end;
	cin >> n;
	vector<pair <int, int>>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> start >> end;
		v[i] = { end, start };
	}
	sort(v.begin(), v.end());

	int endtime = 0;
	int cnt = 0;
	for (auto& n : v)
	{
		if (n.second >= endtime)
		{
			endtime = n.first;
			cnt++;
		}
	}
	cout << cnt;
}