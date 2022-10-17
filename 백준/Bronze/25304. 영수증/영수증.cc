#include <cstdio>

int main() {

    int X,N,a,b,p=0;
    scanf("%d", &X);
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d",&a,&b);
        p += a * b;
    }
    if (X == p)
        printf("Yes");
    else
        printf("No");

    return 0;
}