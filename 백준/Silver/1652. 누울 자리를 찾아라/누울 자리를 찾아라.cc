#include <iostream>
using namespace std;

char arr[101][101];
int n, x = 0, y = 0;

int main() 
{
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		int cntX = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 'X')
				cntX = 0;
			else
			{
				cntX++;
				if (cntX == 2)
					x++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		int cntY = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[j][i] == 'X')
				cntY = 0;
			else
			{
				cntY++;
				if (cntY == 2)
					y++;
			}
		}
	}

	cout << x << ' ' << y;
}