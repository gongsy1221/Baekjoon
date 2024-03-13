#include <iostream>

using namespace std;
int main()
{
	int cnt = 0;
	int a, b, c, x = 0, y = 0, z =0;

	cin >> a >> b >> c;

	while (1)
	{
		if (x == 16) x = 1;
		if (y == 29) y = 1;
		if (z == 20) z = 1;

		if (x == a && y == b && z == c)
		{
			cout << cnt;
			break;
		}

		x++;
		y++;
		z++;
		cnt++;
	}

}