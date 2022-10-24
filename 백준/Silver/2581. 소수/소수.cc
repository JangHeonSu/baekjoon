#include <cstdio>
bool IsPrime(int a);

int main()
{
	int N,M,count = 0;
	int min = 10000;
	scanf("%d", &N);
	scanf("%d", &M);

	for (int i = N; i <= M; i++)
	{
		if (IsPrime(i))
		{
			count += i;

			if (i < min)
				min = i;
		}
	}
	if (count > 0)
		printf("%d\n%d", count, min);
	else
		printf("-1");

	return 0;
}

bool IsPrime(int a) 
{
	int k=0;

	for (int i = 2; i <= a; i++)
	{
		if (a % i == 0)
			k += i;
	}
	if (k == a)
		return true;
	else
		return false;
}