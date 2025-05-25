#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() 
{
    map<string, int> M;
    int n;
    cin >> n;

    while (n--) 
    {
        string s;
        cin >> s;
        if (s.size() >= 6 && s.substr(s.size() - 6, 6) == "Cheese")
        {
            if (M.find(s) == M.end())
                M[s] = 1;
        }
    }

    if (M.size() >= 4)
        cout << "yummy";
    else
        cout << "sad";
}
