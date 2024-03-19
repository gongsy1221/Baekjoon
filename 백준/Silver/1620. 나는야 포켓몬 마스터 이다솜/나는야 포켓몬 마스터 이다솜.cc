#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	unordered_map<string, int> stringmap;
	unordered_map<int, string> intmap;
	int n, m;
	string inp;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> inp;
		stringmap.insert({ inp, i });
		intmap.insert({ i,inp });
	}

	for (int i = 1; i <= m; i++)
	{
		cin >> inp;
		if (isdigit(inp[0]) != 0) // is int
		{
			cout << intmap.at(stoi(inp)) << "\n";
		}
		else // is string
		{
			cout << stringmap.at(inp) << "\n";
		}
	}
}