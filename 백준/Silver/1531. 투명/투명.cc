#include <iostream>
#include<string.h>
using namespace std;

int arr[101][101];
int N, M;

int main()
{
	int cnt = 0;

	memset(arr, 0, sizeof(arr));
	cin >> N >> M;

	while(N--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = x1; i <= x2; i++)
		{
			for (int j = y1; j <= y2; j++)
			{
				arr[i][j]++;
			}
		}
	}

	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (arr[i][j] > M)
				cnt++;
		}
	}

	cout << cnt;
}
