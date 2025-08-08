#include <iostream>
using namespace std;

int main() 
{
	int num, originNum = -1, cnt = 0;
	cin >> num;

	while (num != originNum)
	{
		if(cnt == 0)
			originNum = num;

		int a = 0, b = 0, c = 0;
		a = num / 10;
		b = num % 10;
		c = a + b;
		num = (b * 10) + (c % 10);

		cnt++;
	}

	cout << cnt;
}