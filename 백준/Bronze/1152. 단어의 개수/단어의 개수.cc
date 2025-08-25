#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string inp;
	int cnt = 1;

	getline(cin, inp);

	if (inp.length() == 1 && inp[0] == ' ')
	{
		cout << 0;
		return 0;
	}

	for (int i = 1; i < inp.length() - 1; i++) 
		if (inp[i] == ' ') cnt++;

	cout << cnt;
}