#include <iostream>
#include <string>

using namespace std;
int main()
{
	int cnt = 0;
	int N;
	cin >> N;

	for (int i = 1; i <= N; i *= 10)
	{
		cnt += N - i + 1;
	}

	cout << cnt;
}