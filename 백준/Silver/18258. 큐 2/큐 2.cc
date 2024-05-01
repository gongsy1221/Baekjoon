#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    string str;
    int a, temp;
    cin >> a;

    while (a--)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> temp;
            q.push(temp);
        }
        else if (str == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << "-1\n";
        }
        else if (str == "size")
            cout << q.size() << "\n";
        else if (str == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if (str == "front")
        {

            if(!q.empty())
                cout << q.front() << "\n";
            else
                cout << "-1\n";
        }
        else if (str == "back")
        {

            if(!q.empty())
                cout << q.back() << "\n";
            else
                cout << "-1\n";
        }
    }
}