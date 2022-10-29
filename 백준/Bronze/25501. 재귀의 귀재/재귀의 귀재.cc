#include <cstdio>
#include <string.h>
int count = 0;
int recursion(const char* s, int l, int r,int a) {
    count++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1 , a);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1,1);
}

int main() {

    int T;
    char palindrome[1001];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", palindrome);
        printf("%d ", isPalindrome(palindrome));
        printf("%d\n", count);
        count = 0;
    }

}