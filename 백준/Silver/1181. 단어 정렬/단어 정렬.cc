#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
	if (a.length() != b.length()) return a.length() < b.length();
	return b > a;
}

string arr[20001];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string inp;
		cin >> inp;
		arr[i] = inp;
	}

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i - 1]) continue;
		cout << arr[i] << "\n";
	}
}