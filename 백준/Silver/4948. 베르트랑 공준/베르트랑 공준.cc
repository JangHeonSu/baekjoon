#include <cstdio>
#include <math.h>
int num[246913] = { 0, };

int main()
{
	int N = 1;

	for (int i = 2; i <= sqrt(246913); i++)
	{
		for (int j = 2; j <= 246913 / i; j++)
		{
			num[i * j] = 1;
		}
	}

	while (N != 0)
	{
		int count = 0;
		scanf("%d", &N);
		if (N == 0)
			break;
		for (int i = N + 1; i <= 2 * N; i++)
		{
			if (num[i]==0)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}