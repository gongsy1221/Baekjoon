#include <iostream>
using namespace std;

int n, m, j, point, ret;
int mx, mn;

int main()
{
    cin >> n >> m;
    mn = 1;
    mx = m;
    cin >> j;

    for (int i = 0; i < j; i++)
    {
        cin >> point;
        if (point < mn)
        {
            ret += mn - point;
            mn = point;
            mx = mn + m - 1;
        }
        else if (point > mx)
        {
            ret += point - mx;
            mx = point;
            mn = mx - m + 1;
        }
    }

    cout << ret;
}
