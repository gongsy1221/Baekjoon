#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, cnt = 0;
    char num;
    cin >> n >> num;

    for (int i = 1; i <= n; i++)
    {
        string str = to_string(i);
        for (int j = 0; j < str.size(); j++) 
        {
            if (str[j] == num)
                cnt++;
        }
    }
    cout << cnt;
}