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
		for (int j = i; j < N; j++)
		{
			if (num[i] > num[j])
            {     temp = num[i];
				num[i] = num[j];
                 num[j] = temp;
            }
		}
		printf("%d\n", num[i]);
	}

	return 0;
}