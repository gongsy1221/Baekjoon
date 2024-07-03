#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int w, h, p, q, t;
	cin >> w >> h;
	cin >> p >> q;
	cin >> t;

	if (p + t > w)
		p = (t + p) % (w*2);
	else
		p += t;

	if (q + t > h)
		q = (t + q) % (h* 2);
	else
		q += t;

	if (p > w)
		p = (w * 2) - p;
	if (q > h)
		q = (h * 2) - q;

	cout << p << " " << q;
}