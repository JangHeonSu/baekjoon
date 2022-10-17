#include <cstdio>

int main() {

    int K, Q, L, B, k, P;

    scanf("%d %d %d %d %d %d", &K, &Q, &L, &B, &k, &P);
    printf("%d %d %d %d %d %d", 1 - K, 1 - Q, 2 - L, 2 - B, 2 - k, 8 - P);

    return 0;
}