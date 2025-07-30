#include <iostream>
#include <vector>

using namespace std;

int N, L, D, R, G;

vector<pair<int, pair<int, int>>> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> L;

	int curPos = 0;
	int t = 0;

	for (int i = 0; i < N; i++) 
	{
		cin >> D >> R >> G;
		v.push_back(make_pair(D, make_pair(R, G)));
	}

	for (int i = 0; i < v.size(); i++) 
	{
		int pos = v[i].first;
		int red = v[i].second.first;
		int green = v[i].second.second;

		t += (pos - curPos);
		curPos = pos;

		if ((t % (red + green) <= red))
			t += (red - t % (red + green));
	}

	cout << t + (L - curPos) << "\n";

}