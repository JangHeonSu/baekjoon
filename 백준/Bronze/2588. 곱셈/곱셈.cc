#include <cstdio>

int main() {

    int num1, num2;
    int a, b, c;
    scanf("%d %d", &num1, &num2);
    a = num1 * (num2 % 100 % 10);
    b = num1 * (num2 % 100 / 10);
    c = num1 * (num2 / 100);
    printf("%d \n%d \n%d \n%d ",a , b, c, (a+10*b+100*c));

    return 0;
}