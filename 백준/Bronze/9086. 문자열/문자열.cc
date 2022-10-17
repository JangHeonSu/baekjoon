#include <cstdio>
#include <string.h>

int main() {
	int i;
	char str[1000];
	scanf("%d", &i);

	for (int n = 1; n<=i; n++)
	{
		scanf("%s", str, sizeof(str));
		printf("%c%c\n", str[0], str[strlen(str) - 1]);
	}
	return 0;
}