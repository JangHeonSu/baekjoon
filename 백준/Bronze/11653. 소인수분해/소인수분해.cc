#include <cstdio>
int x(int a);

int main()
{
	int N,t;
	scanf("%d", &N);

	while (N != 1)
	{
        t = x(N);
		printf("%d\n", t);
		N = N / t;
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