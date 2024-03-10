#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int a, b;
	int cnt;

	cin >> a >> b;

	cout << "<";

	for (int i = 1; i < a + 1; i++)
	{
		q.push(i);
	}

	while (q.size() != 0)
	{
		for (int i = 1; i < b; i++)
		{
			q.push(q.front());
			q.pop();
		}

		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}

	cout << ">";
}