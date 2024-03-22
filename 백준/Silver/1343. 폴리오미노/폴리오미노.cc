#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string arr[50];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int cnt = 0;

	string out;
	string inp;

	cin >> inp;
	for (int i = 0; i < inp.length(); i++)
	{
		if (inp[i] == 'X') 
			++cnt;
		
		if (inp[i] == '.')
		{
			out += '.';
			if (cnt % 2 != 0) break;
			else cnt = 0;
		}

		if (cnt == 2 && inp[i + 1] != 'X')
		{
			out += "BB";
			cnt = 0;
		}

		if (cnt == 4)
		{
			out += "AAAA";
			cnt = 0;
		}
	}

	if (cnt % 2 == 1) cout << -1;
	else cout << out;
}