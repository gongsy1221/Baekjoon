#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2) 
{
    return s1 > s2;
}

int main(void) 
{
    vector<string> v, v1, v2;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; i++) 
    {
        v1.push_back(v[i]);
        v2.push_back(v[i]);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), compare);

    if (v == v1)
        cout << "INCREASING" << '\n';
    else if (v == v2)
        cout << "DECREASING" << '\n';
    else
        cout << "NEITHER" << '\n';

}