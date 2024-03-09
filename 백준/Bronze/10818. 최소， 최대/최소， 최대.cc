#include <iostream>

using namespace std;

int main()
{
	int min = 1000001;
	int max = -1000001;
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int inp;
		cin >> inp;

		if (inp > max)
		{
			max = inp;
		}

		if (inp < min)
		{
			min = inp;
		}
	}

	cout << min << " " << max;
}