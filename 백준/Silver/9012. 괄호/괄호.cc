#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string str;
	int inp, a = 0, b = 0, check = 1;

	cin >> inp;
	for (int i = 0; i < inp; i++)
	{
		stack<char> s;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
				s.push(str[j]);
			else if (str[j] == ')')
			{
				if (!s.empty())
					s.pop();
				else
				{
					s.push(str[j]);
					break;
				}
			}
		}

		if (s.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}