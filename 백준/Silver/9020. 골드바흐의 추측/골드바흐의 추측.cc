#include <cstdio>
#include <math.h>
int num[10001] = { 1, 1,};


int main()
{
	for (int j = 2; j <= 10000; j++)
	{
		for (int i = 2; i <= sqrt(j); i++)
		{
			if (j % i == 0)
			{
				num[j] = 1;
				break;
			}
		}
	}

	int T,N,a,b;
	scanf("%d", &T);


	for (int i = 0; i < T; i++)
	{
		scanf("%d", &N);
		for (int i = 2; i <= N / 2; i++)
		{
			if (num[i] == 0 && num[N - i] == 0)
			{
				a = i;
				b = N - i;
			}
		}
		printf("%d %d\n", a, b);
	}



	return 0;
}