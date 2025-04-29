#include <iostream>
#include <string>
using namespace std;

int main()
{
    int digitCount[10] = { 0 };
    string num;
    cin >> num;

    for (char ch : num)
    {
        digitCount[ch - '0']++;
    }

    int sixNine = (digitCount[6] + digitCount[9] + 1) / 2;
    digitCount[6] = digitCount[9] = sixNine;

    int maxSet = 0;
    for (int i = 0; i < 10; i++)
    {
        if (digitCount[i] > maxSet)
            maxSet = digitCount[i];
    }

    cout << maxSet;
}
