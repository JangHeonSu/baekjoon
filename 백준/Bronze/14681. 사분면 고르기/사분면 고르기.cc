#include <cstdio>

int main() {
    int X, Y;
    scanf("%d", &X);
    scanf("%d", &Y);
    if(X>0&&Y>0)
    printf("1");
    else if(X<0&&Y>0)
    printf("2");
    else if(X<0&&Y<0)
    printf("3");
    else if(X>0&&Y<0)
    printf("4");
    return 0;
}