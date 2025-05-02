#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
priority_queue<int> pq;

int main()
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < n - 1; i++) 
	{
		int a;
		cin >> a;
		pq.push(a);
	}

	int cnt = 0;
	while (!pq.empty()) 
	{
		int top = pq.top();
		pq.pop();
		if (top < m) break;
		else {
			pq.push(top - 1);
			m++;
			cnt++;
		}
	}

	cout << cnt;
}
