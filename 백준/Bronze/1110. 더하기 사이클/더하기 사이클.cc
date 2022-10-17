#include <cstdio>

int main(void)
{
	int A,N,count=0;
	scanf("%d", &N);
	A = N;

	while(1)
	{
		A = (A % 10)*10 + ((A / 10) + (A % 10))%10;
		count++;
		if (A == N)
			break;
	}

	printf("%d", count);

	return 0;
}