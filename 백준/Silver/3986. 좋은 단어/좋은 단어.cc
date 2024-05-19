#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string str;
	int inp, cnt = 0;

	cin >> inp;
	for (int i = 0; i < inp; i++)
	{
		stack<char> s;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (s.empty()) s.push(str[j]);
			else
			{
				if (str[j] == s.top()) s.pop();
				else s.push(str[j]);
			}
		}

		if (s.empty()) cnt++;
	}

	cout << cnt;
}