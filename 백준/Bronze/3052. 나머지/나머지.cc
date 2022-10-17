#include <cstdio>

int main(void)
{
	int num[10];
	int num2[42] = { 0 };
	int count = 0;

	for (int j = 0; j < 10; j++)
	{
		int k = 0;
		scanf("%d", &num[j]);
		k = num[j] % 42;
		num2[k]++;
	}

	for (int j = 0; j < 42; j++)
	{
		if (num2[j] > 0)
			count++;
	}

	printf("%d", count);
	
	return 0;
}