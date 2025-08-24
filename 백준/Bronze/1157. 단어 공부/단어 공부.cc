#include <iostream>
using namespace std;

int arr[26], cnt = 0;
string inp;

int main() 
{
    cin >> inp;

    for (int i = 0; i < inp.length(); i++) 
    {
        if (inp[i] < 97) 
            arr[inp[i] - 65]++;
        else 
            arr[inp[i] - 97]++;
    }

    int max = 0, max_val = 0;

    for (int i = 0; i < 26; i++) 
    {
        if (max < arr[i]) 
        {
            max = arr[i];
            max_val = i;
        }
    }

    for (int i = 0; i < 26; i++)
        if (max == arr[i]) cnt++;

    if (cnt > 1) 
        cout << "?";
    else 
        cout << (char)(max_val + 65);
}