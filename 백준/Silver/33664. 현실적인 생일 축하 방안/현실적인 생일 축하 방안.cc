#include <iostream>
#include <map>
using namespace std;

int main() 
{
	map<string, long long> present;
	long long b, n, m;
	cin >> b >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string a;
		long long v;
		cin >> a >> v;
		present.insert({ a, v });
	}

	long long cnt = 0;
	for (int i = 0; i < m; i++)
	{
		string a;
		cin >> a;
		cnt += present[a];
	}

	if (cnt > b)
		cout << "unacceptable";
	else
		cout << "acceptable";
}