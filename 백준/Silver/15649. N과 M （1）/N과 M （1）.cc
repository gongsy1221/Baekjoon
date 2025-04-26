#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool check[9];
int result[9], n, m;

void Recur(int num)
{
	if (num == m)
	{
		for (int i = 0; i < m; i++)
			cout << result[i] << ' ';
		cout << '\n';
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (!check[i])
			{
				check[i] = true;
				result[num] = i;
				Recur(num + 1);
				check[i] = false;
			}
		}
	}
}

int main()
{
	cin >> n >> m;

	Recur(0);
}