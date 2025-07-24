#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() 
{
    int n, result;
    cin >> n;

    string s;
    vector<string>students(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> s;
        reverse(s.begin(), s.end());
        students[i] = s;
    }

    vector<pair<string, int>>check;
    for (int i = 1; i <= students[0].length(); i++) 
    {
        set<string>s;
        for (int k = 0; k < n; k++) 
            s.insert(students[k].substr(0, i));

        if (s.size() == n) 
        {
            result = i;
            break;
        }
    }
    cout << result;
}