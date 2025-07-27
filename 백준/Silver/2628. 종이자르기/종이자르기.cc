#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> h;
vector<int> w;
vector<int> hl;
vector<int> wl;

int main() 
{
	int n, m;
	int num;

	cin >> n >> m;
	cin >> num;

	for (int i = 0; i < num; i++) 
	{
		int x, n;
		cin >> x >> n;
		if (x == 0)
			h.push_back(n);
		else if (x == 1)
			w.push_back(n);
	}

	w.push_back(n);
	h.push_back(m);

	sort(w.begin(), w.end());
	sort(h.begin(), h.end());

	for (int i = 0; i < w.size(); i++) 
	{
		if (i == 0)
			wl.push_back(w[i]);
		else
			wl.push_back(w[i] - w[i - 1]);
	}

	for (int i = 0; i < h.size(); i++)
	{
		if (i == 0)
			hl.push_back(h[i]);
		else
			hl.push_back(h[i] - h[i - 1]);
	}

	sort(wl.begin(), wl.end());
	sort(hl.begin(), hl.end());

	cout << wl[wl.size() - 1] * hl[hl.size() - 1];
}