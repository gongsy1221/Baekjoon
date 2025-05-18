#include <iostream>
#include <queue>
using namespace std;

string A, B;
int English[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
queue<int> q, nextQ;

int main() 
{
    cin >> A >> B;
    for (int i = 0; i < A.size(); ++i)
    {
        q.push(English[A[i] - 'A']);
        q.push(English[B[i] - 'A']);
    }

    int n, m;
    while (true)
    {
        n = q.front();
        q.pop();

        while (!q.empty())
        {
            m = q.front();
            nextQ.push((n + m) % 10);
            n = m;
            q.pop();
        }

        q = nextQ;
        nextQ = queue<int>();

        if (q.size() == 2)
            break;
    }

    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
}