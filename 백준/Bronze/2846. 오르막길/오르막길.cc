#include<iostream>
using namespace std;

int arr[1001], n, num = 0, result = 0;

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[i - 1]) 
        {
            if (num == 0)
                num = arr[i - 1];
            if (i == n - 1)
                result = max(result, arr[i] - num);
        }
        else 
        {
            if (num != 0)
                result = max(result, arr[i - 1] - num);
            num = 0;
        }
    }

    cout << result;
}