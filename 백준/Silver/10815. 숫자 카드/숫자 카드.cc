#include<iostream>
#include<set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	set<int> s;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		s.insert(m);
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> n;
		if (s.find(n) != s.end())
		{
			cout << 1 << " ";
			continue;
		}
		cout << 0 << " ";
	}
}