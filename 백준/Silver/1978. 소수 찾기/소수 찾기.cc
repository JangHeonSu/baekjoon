#include <cstdio>
bool IsPrime(int a);

int main()
{
	int N,k,count=0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &k);
		if (IsPrime(k))
			count++;
	}
	
	printf("%d", count);

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