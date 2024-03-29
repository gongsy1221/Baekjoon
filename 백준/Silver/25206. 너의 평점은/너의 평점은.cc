#include <iostream>
using namespace std;

int main()
{
	string grade, name;
	float score, sum = 0;
	int cnt = 0;
	float grades[20] = { 0 };
	string arr[9] = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F" };

	for (int i = 0; i < 20; i++)
	{
		cin >> name >> score >> grade;

		if (grade == "P") continue;

		cnt += score;

		float num = 5.0;
		for (int i = 0; i < 9; i++)
		{
			if (grade == arr[i])
			{
				grades[i] += (num-(0.5f * (i + 1))) * score;
				break;
			}
		}
	}

	for (int i = 0; i < 8; i++)
		sum += grades[i];

	cout << sum / (cnt);
}