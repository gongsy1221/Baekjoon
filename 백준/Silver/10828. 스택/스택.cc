#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	int n;
	string str;
	int num;
	int result = 0;    

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			cin >> num;
			s.push(num);
		}
		else if (str == "pop") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << endl;
		}
		else if (str == "empty") {
			if (s.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}
		else if (str == "top") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
			}
		}
	}
}