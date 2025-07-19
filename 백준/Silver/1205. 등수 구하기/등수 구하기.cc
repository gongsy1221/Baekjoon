#include <iostream>
using namespace std;

int main() 
{
	int N, score, P;
	int arr[100];

	cin >> N >> score >> P;

	for (int i = 0; i < N; i++) 
		cin >> arr[i];

	int cnt = 0;
	int rank = 1;
	for (int i = 0; i < N; i++) 
	{
		if (score < arr[i])
			rank += 1;
		else if (score == arr[i])
			rank = rank;
		else 
			break;
		cnt++;
	}

	if (cnt == P) 
		rank = -1;
	if (N == 0)
		rank = 1;

	cout << rank;
}