#include <cstdio>

int main()
{
	int N,temp;
	int num[1001]={0,};
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < N; i++)
	{
		int max = -1001;
		for (int j = i; j < N; j++)
		{
			if (max < num[j])
				max = num[j];
		}

		for (int j = i; j < N; j++)
		{
			if (max == num[j])
			{
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
		
	}

	for (int i = N-1; i >= 0; i--)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}