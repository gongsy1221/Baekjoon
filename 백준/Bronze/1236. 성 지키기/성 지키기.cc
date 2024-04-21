#include <iostream>
using namespace std;

int arr[50][50];
int main()
{
	int n, m, cnt = 0, x = 0, y =0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = a[j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 'X')
				cnt = 1;
		}
		if (cnt == 0) y++;
		cnt = 0;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (arr[j][i] == 'X')
				cnt = 1;
		if (cnt == 0) x++;
		cnt = 0;
	}

	if (x > y) cout << x;
	else cout << y;
}