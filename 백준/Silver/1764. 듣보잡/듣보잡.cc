#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	map<string, string> name;
	vector<string> nn;

	string str;
	int n, m, cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		name[str] = str;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (name[str] == str)
		{
			nn.push_back(str);
			cnt++;
		}
	}

	sort(nn.begin(), nn.end());

	cout << cnt << "\n";
	for (auto s:nn)
	{
		cout << s << "\n";
	}
}