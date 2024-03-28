#include <iostream>
using namespace std;

int arr[100][100] = { 0 };
int main()
{
	int a, b, sum = 0;
	int num;
	cin >> num;

	while(num--)
	{
		cin >> a >> b;
		for (int i = a; i < a + 10; i++)
		{
			for (int j = b; j < b + 10; j++)
			{
				if (!arr[i][j]) {
					sum++;
					arr[i][j] = 1;
				}
			}
		}
	}

	cout << sum;
}