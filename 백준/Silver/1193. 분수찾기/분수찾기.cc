#include <iostream>
using namespace std;

int main()
{
	int inp, line = 1;
	cin >> inp;

	while (inp - line > 0)
	{
		inp -= line;
		line++;
	}

	if (line % 2 == 1) cout << line + 1 - inp << "/" << inp;
	else cout << inp << "/" << line + 1 - inp;
}