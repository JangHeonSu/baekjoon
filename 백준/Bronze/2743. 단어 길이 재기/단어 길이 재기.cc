#include <cstdio>

int main() {

	int count = 0;
	int i = 0;
	char str[100];
	scanf("%s", str, sizeof(str));

	while (str[i]!=NULL)
	{
		count++;
		i++;
	}
	printf("%d", count);

	return 0;
}