#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;
	int n;
	string str;
	int num;
	int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "1") {
			cin >> num;
			s.push(num);
		}
		else if (str == "2") {
			if (s.size() == 0) {
				result = -1;
				cout << result << "\n";
			}
			else {
				result = s.top();
				cout << result << "\n";
				s.pop();
			}
		}
		else if (str == "3") {
			cout << s.size() << "\n";
		}
		else if (str == "4") {
			if (s.size() == 0) {
				result = 1;
				cout << result << "\n";
			}
			else {
				result = 0;
				cout << result << "\n";
			}
		}
		else if (str == "5") {
			if (s.size() == 0) {
				result = -1;
				cout << result << "\n";
			}
			else {
				result = s.top();
				cout << result << "\n";
			}
		}
	}
}