#include <iostream>
using namespace std;
int pascal[31][31];

int main()
{
    int n, k, w, cnt = 0;
    cin >> n >> k >> w;

    for (int i = 0; i <= 30; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cnt += pascal[n + i - 1][k + j - 1];
        }
    }

    cout << cnt;
}