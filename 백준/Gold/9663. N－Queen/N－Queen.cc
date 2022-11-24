#include <iostream>
#include <vector>
using namespace std;

int arr[256] = { 0 };
int result;

void DFS(int N, int k, int c)
{
    if (k == N)
    {
        result++;
        return;
    }

    else
    {
        int back = 0;
        for (int z = c; z < N*N; z++)
        {
            if (back == N)
                break;
            int j = z % N;
            int i = z / N;
            if (arr[z]!=0)
            {
                back++;
                continue;
            }

            for (int v = z; v < N * N; v += N)
            {
                arr[v]++;
            }
            
            for (int v = z; v < N*N; v += N + 1)
            {
                arr[v] ++;
                if (v % N == N - 1)
                    break;
            }

            for (int v = z; v < N * N; v += N - 1)
            {
                arr[v] ++;
                if (v % N == 0)
                    break;
            }

            DFS(N, k + 1, (i + 1) * N);
            back++;
            for (int v = z; v < N*N; v += N + 1)
            {
                arr[v] --;
                if (v % N == N - 1)
                    break;
            }
            
            for (int v = z; v < N * N; v += N - 1)
            {
                arr[v] --;
                if (v % N == 0)
                    break;
            }
  
            for (int v = z; v < N * N; v += N)
            {
                arr[v]--;
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;

    DFS(N, 0, 0);

    cout << result;

    return 0;
}