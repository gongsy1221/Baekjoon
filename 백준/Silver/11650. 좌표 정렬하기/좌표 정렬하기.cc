#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> p[100001];

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first) 
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main() 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}

	sort(p, p + n, compare);

	for (int i = 0; i < n; i++)
	{
		cout << p[i].first << ' ' << p[i].second << "\n";
	}
}