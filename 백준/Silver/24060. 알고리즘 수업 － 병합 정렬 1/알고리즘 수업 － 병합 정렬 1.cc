#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int K, hs = 0,a =-1;

void merge(int A[], int tmp[], int p, int q, int r) {
    int i = p;
    int j = q + 1;
    int t = 1;

    while (i <= q && j <= r) {
        if (A[i] <= A[j])
        {
            tmp[t++] = A[i++];
            if (++hs == K)
                a = A[i-1];
        }

        else
        {
            tmp[t++] = A[j++];
            if (++hs == K)
                a = A[j-1];
        }
    }
    while (i <= q)
    {
        tmp[t++] = A[i++];
        if (++hs == K)
            a = A[i-1];
    }
    while (j <= r)
    {
        tmp[t++] = A[j++];
        if (++hs == K)
            a = A[j-1];
    }
    i = p;
    t = 1;
    while (i <= r)
        A[i++] = tmp[t++];

}

void merge_sort(int A[], int tmp[], int p,int r) {

        if (p < r) 
        {
            int q  = (p + r) / 2;       
            merge_sort(A, tmp, p, q);     
            merge_sort(A,tmp, q + 1, r);  
            merge(A, tmp, p, q, r);
        }
}

int main() {

    int N;

    cin >> N >> K;

    int* tmp = new int[N];
    int* arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    merge_sort(arr, tmp, 0, N - 1);
    cout << a;

    delete[] arr,tmp;

	return 0;
}