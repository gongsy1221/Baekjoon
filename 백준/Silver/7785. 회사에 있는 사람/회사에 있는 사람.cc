#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() 
{
	set<string> s;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		if (b == "leave")
		{
			if (s.find(a) != s.end())
				s.erase(a);
		}
		else
			s.insert(a);
	}

	for (auto iter = s.rbegin(); iter != s.rend(); iter++) 
	{
		cout << *iter << "\n";
	}
}