#include <iostream>
using namespace std;

int daysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
string arr[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main() 
{
    int month, date;
    cin >> month >> date;

    int totalDays = 0;

    totalDays += date;
    for (int i = 0; i < (month - 1); i++) 
        totalDays += daysInMonth[i];

    cout << arr[totalDays % 7];
}
