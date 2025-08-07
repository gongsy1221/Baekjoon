#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, pair<int, int>>> v;
int num[101];

int main()
{
	int n , a = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		num[i + 1] = 0;
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({ c, {a, b} });
	}

	sort(v.begin(), v.end(), greater<pair<int, pair<int, int>>>());

	for (int i = 0; i < n; i++) 
	{
		if (num[v[i].second.first] >= 2) 
			continue;
		a++;
		num[v[i].second.first]++;
		cout << v[i].second.first << ' ' << v[i].second.second << endl;
		if (a == 3) 
			break;
	}
}