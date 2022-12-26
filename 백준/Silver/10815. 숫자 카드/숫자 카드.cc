#include <cstdio>

int num[20000002] = { 0, };

int main()
{
	int t = 0, M, N, a;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		a += 10000000;
		num[a]++;
	}

	scanf("%d", &M);

	for (int i = 0; i < M; i++)
	{
		scanf("%d", &a);
		a += 10000000;
		if (num[a] != 0)
			t = 1;
		else
			t = 0;
		printf("%d ",t);
	}

	return 0;
}