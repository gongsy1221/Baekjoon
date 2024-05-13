#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n, inp;
    int count = 1;
    stack<int> stack;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> inp;
        stack.push(inp);
        while (!stack.empty())
        {
            if (stack.top() == count)
            {
                stack.pop();
                count++;
            }
            else
                break;
        }
    }

    if (stack.empty())
        cout << "Nice";
    else
        cout << "Sad";
}