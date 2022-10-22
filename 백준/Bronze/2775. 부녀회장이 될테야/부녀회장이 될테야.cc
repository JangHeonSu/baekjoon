#include <cstdio>

int main()
{
	int T, k, n;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &k);
		scanf("%d", &n);
		int num1[16] = { 0, };
		int num2[16] = { 0, };
		int count = 1;
		for (int j = 0; j <= n; j++)
		{
			for (int t = 0; t <= j; t++)
			{
				num1[j] += t;
			}
		}
		while (1)
		{
			if (k == count)
				break;
			for (int j = 0; j <= n; j++)
			{
				num2[j] = 0;
			}
			for (int j = 0; j <= n; j++)
			{
				for (int t = 0; t <= j; t++)
				{
					num2[j] += num1[t];
				}
			}
			count++;
			if (k == count)
				break;

			for (int j = 0; j <= n; j++)
			{
				num1[j] = 0;
			}

			for (int j = 0; j <= n; j++)
			{
				for (int t = 0; t <= j; t++)
				{
					num1[j] += num2[t];
				}
			}
			count++;
		}
		if (k % 2 == 0)
			printf("%d\n", num2[n]);
		else
			printf("%d\n", num1[n]);
	}

	return 0;
}
