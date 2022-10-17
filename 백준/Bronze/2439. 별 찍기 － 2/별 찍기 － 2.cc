#include <cstdio>

int main() {

    int N;
    scanf("%d", &N);

    for (int j = 0; j < N; j++) 
    {
        for (int i = N-j; i > 1; i--)
        {
            printf(" ");
        }
        for (int k = 0; k <=j ; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}