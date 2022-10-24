#include <cstdio>


int main()
{
	int num[102] = { 0, };
	int N,v,count=0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	scanf("%d", &v);

	for (int i = 0; i < N; i++)
	{
		if (v == num[i])
			count++;
	}

	printf("%d", count);

	return 0;
}
