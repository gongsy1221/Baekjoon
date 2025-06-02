#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v;
    int N; 
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        int a; 
        cin >> a;
        v.push_back(a);
    }

    int maxVal = -1;
    int result = 0;
    for (int i = v.size() - 1; i >= 0; i--) 
    {
        if (v[i] > maxVal) 
            maxVal = v[i];
        result = max(result, maxVal - v[i]);
    }
    cout << result;
}