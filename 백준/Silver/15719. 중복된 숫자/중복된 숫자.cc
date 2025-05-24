#include <iostream>
using namespace std;

int main() 
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, a = 0;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        a += i;
        int b;
        cin >> b;
        a -= b;
    }
    cout << -a;
}