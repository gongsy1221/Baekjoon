#include <iostream>
#include <vector>
using namespace std;

int arr[26] = { 3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
string n, m, sum;
int s1, s2;
vector<int> num;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> s1 >> s2;
	cin >> n >> m;

	int min = s1 >= s2 ? s2 : s1;
	int max = s1 >= s2 ? s1 : s2;

	string maxString = s1 >= s2 ? n : m;
	for (int i = 0; i < min; i++) 
	{
		sum += n[i];
		sum += m[i];
	}

	for (int i = min; i < max; i++) 
		sum += maxString[i];

	for (int i = 0; i < s1 + s2; i++) 
	{
		int idx = sum[i] - 'A';
		num.push_back(arr[idx]);
	}

	while (num.size() != 2) 
	{
		vector<int> tmp;
		for (int i = 0; i < num.size() - 1; i++) 
		{
			int tmpNum = num[i] + num[i + 1];
			tmp.push_back(tmpNum > 9 ? tmpNum - 10 : tmpNum);
		}
		num = tmp;
	}

	if (num[0] == 0)
		cout << num[1] << "%";
	else
		cout << num[0] << num[1] << "%";
}