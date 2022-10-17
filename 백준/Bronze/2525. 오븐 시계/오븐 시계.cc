#include <cstdio>

int main() {
    int A, B, C, M, H;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    H = C / 60;
    M = C % 60;

    if (B + M >= 60)
    {
        B -= 60;
            A++;
    }
    if (A + H >= 24)
        A -= 24;
    printf("%d %d", A + H, B + M);


    return 0;
}