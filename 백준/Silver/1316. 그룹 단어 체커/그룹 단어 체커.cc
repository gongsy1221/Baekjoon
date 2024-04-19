#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num, cnt = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;

		for (int j = 0; j < str.length() - 1; j++)
		{
			if (str[j] != str[j + 1])
			{
				if (str.find(str[j], j + 2) != string::npos) {
					cnt++;
					break;
				}
			}
		}
	}

	cout << num - cnt;
}