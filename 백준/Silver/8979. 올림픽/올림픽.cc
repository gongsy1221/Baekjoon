#include <iostream>
using namespace std;

int N, K;
int gold[1001];
int silver[1001];
int bronze[1001];
int result = 0;

int main() {

    cin >> N >> K;
    for (int i = 0; i < N; i++) 
    {
        int index;
        cin >> index;
        cin >> gold[index] >> silver[index] >> bronze[index];
    }

    for (int i = 1; i <= N; i++)
    {
        if (gold[i] > gold[K]) 
        {
            result++;
        }
        else if (gold[i] == gold[K]) 
        {
            if (silver[i] > silver[K]) 
            {
                result++;
            }
            else if (silver[i] == silver[K]) 
            {
                if (bronze[i] > bronze[K])
                {
                    result++;
                }
            }
        }
    }

    cout << result + 1;
}