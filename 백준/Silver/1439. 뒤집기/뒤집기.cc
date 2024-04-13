#include <iostream>;
using namespace std;

int main()
{
	string str; 
	cin >> str; 
	int max = 0; 
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0') {
			while (str[i] == '0') {
				i++;
				if (i == str.length()) 
					break;
			}

			cnt1++;
			i--;
		}
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '1') {
			while (str[i] == '1') {
				i++;
				if (i == str.length()) 
					break;
			}

			cnt2++;
			i--;
		}
	}
	if (cnt1 < cnt2) cout << cnt1;
	else cout << cnt2;
}