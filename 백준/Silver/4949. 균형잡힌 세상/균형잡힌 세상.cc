#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    bool balance;
    while (true)
    {
        balance = true;
        stack<char> st;
        string str;
        bool result = true;
        getline(cin, str);
        if (str == ".") break;

        for (char ch : str) {
            if (ch == '(' || ch == '[')
                st.push(ch);
            else if (ch == ')') {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                {
                    result = false;
                    break;
                }
            }
            else if (ch == ']') {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                {
                    result = false;
                    break;
                }
            }
        }
        if (st.empty() && result)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}