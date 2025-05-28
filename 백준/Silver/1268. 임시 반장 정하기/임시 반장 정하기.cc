#include <iostream>
using namespace std;

int arr[1001][5];
int student[1001];

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j) continue;

            for (int k = 0; k < 5; k++) 
            {
                if (arr[i][k] == arr[j][k]) 
                {
                    student[i]++;
                    break;
                }
            }
        }
    }

    int result = 0;
    int maxVal = -1;

    for (int i = 0; i < n; i++) 
    {
        if (student[i] > maxVal) 
        {
            maxVal = student[i];
            result = i + 1;
        }
    }

    cout << result << '\n';
}
