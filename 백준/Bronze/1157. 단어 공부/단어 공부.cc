#include <cstdio>

char str[1000001];

int main()
{
	int num[26] = { 0 };
	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] > 64 && str[i] < 91)
			num[str[i] - 65]++;
		else if (str[i] > 96 && str[i] < 123)
			num[str[i] - 97]++;
	}

	int t,max = 0;
	int count = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max < num[i])
			max = num[i];
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == num[i])
		{
			count++;
			t = i;
		}
	}

	if (count > 1)
		printf("?");
	else
		printf("%c", (t + 65));

	return 0;
}
