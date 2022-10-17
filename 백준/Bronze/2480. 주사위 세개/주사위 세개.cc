#include <cstdio>

int main() {

    int A, B, C, max;

    scanf("%d %d %d", &A, &B, &C);
    max = A;
    if (max < B)
        max = B;
    if (max < C)
        max = C;
    if (A == B && B == C)
        printf("%d", 10000 + 1000 * A);
    else if (A == B || A == C)
        printf("%d", 1000 + 100 * A);
    else if (B == C)
        printf("%d", 1000 + 100 * B);
    else
        printf("%d", max*100);


    return 0;
}