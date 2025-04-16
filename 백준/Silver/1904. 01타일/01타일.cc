#include <iostream>
using namespace std;
long long cache[1000001] = { 0, 1, 2 };
long long a(int n)
{
	if (cache[n])
		return cache[n];
	return cache[n] = (a(n - 1) + a(n - 2)) % 15746;
}
int main()
{
    int n;
    cin >> n;
	cout << a(n) << "\n";
}