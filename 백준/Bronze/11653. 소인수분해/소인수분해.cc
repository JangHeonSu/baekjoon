#include <cstdio>
int x(int a);

int main()
{
	int N;
	scanf("%d", &N);

	while (N != 1)
	{
		printf("%d\n", x(N));
		N = N / x(N);
	}

	return 0;
}

int x(int a) 
{
	for (int i = 2; i <= a; i++)
	{
		if (a % i == 0)
			return i;

	}
}