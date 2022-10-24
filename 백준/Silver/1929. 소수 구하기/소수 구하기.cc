#include <cstdio>
bool IsPrime(int a);

int main()
{
	int N,M;
	scanf("%d %d", &N, &M);

	for(int i=N;i<=M;i++)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
	return 0;
}

bool IsPrime(int a) 
{
	int k = 0;
	for (int i = 2; i*i <= a; i++)
	{
		if (a % i == 0)
			k += i;
	}
	if (k == 0 && a!=1 )
		return true;
	else
		return false;
}