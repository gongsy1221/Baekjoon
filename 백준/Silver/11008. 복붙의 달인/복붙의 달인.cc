#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		string b, c;
		cin >> b >> c;

		int idx = 0;
		int second = b.length();

		while (idx < b.length() - c.length() + 1)
		{
			if (b[idx] == c[0])
			{
				bool same = true;

				for (int i = 0; i < c.length(); i++)
				{
					if (b[idx + i] != c[i])
					{
						same = false;
						break;
					}
				}

				if (same)
				{
					idx += c.length();
					second -= (c.length() - 1);
					continue;
				}
			}
			idx++;
		}

		cout << second << '\n';
	}
}
