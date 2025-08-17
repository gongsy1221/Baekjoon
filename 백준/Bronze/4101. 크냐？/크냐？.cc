#include<iostream>
using namespace std;

int main() 
{
    while (true)
    {
        int n, m;
        cin >> n >> m;

        if (n > m)
            cout << "Yes" << '\n';
        else if (n == 0 && m == 0)
            break;
        else
            cout << "No" << '\n';
    }
}