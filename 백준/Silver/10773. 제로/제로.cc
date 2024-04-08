#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	int num, sum = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int n;
		cin >> n;
		if (n == 0)
			s.pop();
		else s.push(n);
	}

	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;
}