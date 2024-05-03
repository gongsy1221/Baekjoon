#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        q.push(i);
    }

    while (q.size() > 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();
}