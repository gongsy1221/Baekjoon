#include <iostream>
#include <algorithm>
using namespace std;

string board[51];

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int CheckBW(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j =0; j < 8; j++)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int CheckWB(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main() 
{
    int n, m, minVal = 100;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> board[i];

    for (int i = 0; i <= n-8; i++)
    {
        for (int j = 0; j <= m-8; j++)
        {
            int temp;
            int val = min(CheckBW(i, j), CheckWB(i, j));
            if (minVal > val)
                minVal = val;
        }
    }

    cout << minVal;
}