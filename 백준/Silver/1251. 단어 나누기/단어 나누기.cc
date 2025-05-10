#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str, ans;
    cin >> str;

    int len = str.size();
    for (int i = 1; i <= len - 2; i++)
    {
        for (int j = 1; j <= len - i - 1; j++)
        {
            string a = str.substr(0, i);
            string b = str.substr(i, j);
            string c = str.substr(i + j);

            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());

            string result = a + b + c;

            if (ans == "") 
                ans = result;
            else if (ans > result)
                ans = result;
        }
    }

    cout << ans << endl;
}