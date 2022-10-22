#include <cstdio>

int main()
{
	int N,a,b;

	scanf("%d", &N);

	if (N % 5 == 0)
	{
		a = (N / 5);
		printf("%d", a);
	}
	else if ((N % 5) % 3 == 0)
	{
		a = (N / 5);
		b = (N - 5 * a)/3;
		printf("%d", a+b);
	}
	else {
		a = (N / 5);
		while (1)
		{
			if ((N - 5 * a) % 3 == 0)
			{
				b = (N - 5 * a) / 3;
				printf("%d", a + b);
				break;
			}
			a--;
			if (a < 0)
			{
				printf("-1");
				break;
			}
		}
	}
	return 0;
}
