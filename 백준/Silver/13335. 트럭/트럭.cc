#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, W, L, T = 0;
vector<pair<int, int>> truck;

int main()
{
	cin >> N >> W >> L;

	int a;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		truck.push_back(make_pair(a, 0));
	}

	int weight = 0, num = 0;
	while (num < N || weight > 0)
	{
		for (int i = 0; i < N; i++)
		{
			if (truck[i].second > 0)
				truck[i].second++;

			if (truck[i].second == W + 1)
				weight -= truck[i].first;
		}

		if (num < N && weight + truck[num].first <= L)
		{
			weight += truck[num].first;
			truck[num].second++;
			num++;
		}

		T++;
	}

	cout << T;
}