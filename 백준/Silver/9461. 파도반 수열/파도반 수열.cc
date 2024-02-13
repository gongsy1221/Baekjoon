#include <iostream>
using namespace std;
long long cache[101] = { 0,1,1,1,2,2 };
long long a(int n)
{
	if (cache[n])
		return cache[n];
	return cache[n] = a(n - 2) + a(n - 3);
}
int main()
{
    int t;
    cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << a(n)<<"\n";
	}
}