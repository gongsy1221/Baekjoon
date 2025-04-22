#include <iostream>
using namespace std; 
#define MOD 1000000009
long long d[1000010]; 
int main()
{    
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n; 
	cin >> t;  

	d[1] = 1; 
	d[2] = 2; 
	d[3] = 4;   

	for(int i = 4 ; i <= 1000000; i++)
		d[i] = (d[i - 1] + d[i - 2] + d[i - 3]) % MOD;

	while(t--)
	{
		cin >> n;
		cout << d[n] << "\n";
	}
}