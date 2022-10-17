#include <cstdio>

int main() {
    int A;
    scanf("%d", &A);
    
    if(A>=90&&A<=100)
        printf("A");
    else if(A>=80&&A<90)
        printf("B");
    else if(A>=70&&A<80)
        printf("C");
    else if(A>=60&&A<70)
        printf("D");
    else
        printf("F");
    return 0;
}