#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[50][50];

int main()
{
	string input;
	int ans = 0;

	cin >> N >> M;
	for (int i = 0; i < N; i++) 
	{
		cin >> input;
		for (int j = 0; j < M; j++)
			arr[i][j] = input[j] - '0';
	}

	int Max_len = min(N, M);
	int a, b, c, d;
	for (int l = 1; l <= Max_len; l++)
	{
		for (int i = 0; i <= N - l; i++)
		{
			for (int j = 0; j <= M - l; j++)
			{
				a = arr[i][j];
				b = arr[i + l - 1][j];
				c = arr[i][j + l - 1];
				d = arr[i + l - 1][j + l - 1];
				if (a == b && b == c && c == d)
					ans = l;
			}
		}
	}
	cout << ans * ans;
}