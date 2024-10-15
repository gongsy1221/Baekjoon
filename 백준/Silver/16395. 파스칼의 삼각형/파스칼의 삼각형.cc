#include <iostream>
using namespace std;
int pascal[31][31];

int main()
{
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0) 
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    cout << pascal[n-1][k-1];
}