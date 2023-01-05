#include <stdio.h>
#include <stdlib.h>

void inputArr(int** arr, int size);

int main(void) {

    int n, res = 0;
    scanf("%d", &n);

    int** a = (int**)malloc(n * sizeof(int*));
    int** b = (int**)malloc(n * sizeof(int*));


    for (int i = 0; i < n; i++)
    {
        a[i] = (int*)malloc(n * sizeof(int));
        b[i] = (int*)malloc(n * sizeof(int));
    }

    inputArr(a, n);
    inputArr(b, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool check = 0;
            for (int k = 0; k < n; k++)
            {
                check |= (a[i][k] & b[k][j]);
            }
            if (check == 1)
                res++;
        }
    }

    printf("%d", res);
    for (int i = 0; i < n; i++)
    {
        free(a[i]);
        free(b[i]);
    }
    free(a);
    free(b);
}

void inputArr(int** arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}