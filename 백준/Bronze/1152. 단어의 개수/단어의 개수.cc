#include <cstdio>
char str[1000001];

int main()
{
	int count = 0;
	scanf("%[^\n]s", str);

	for (int i = 0; str[i] != 0; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i + 1] == ' ')
				count++;
			else if (str[i + 1] == 0)
				count++;
		}
	}
	printf("%d", count);

	return 0;
}
