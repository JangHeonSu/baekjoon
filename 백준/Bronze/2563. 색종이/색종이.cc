#include <cstdio>
int a[101][101] = { 0, };
void square(int b, int c);

int main()
{
	int N, k, j, count = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &k, &j);
		square(k, j);
	}

	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (a[i][j] == 1)
				count++;
		}
	}

	printf("%d", count);
	return 0;
}


void square(int b, int c)
{
	for (int i = b+1; i <= b + 10; i++)
	{
		for (int j = c+1; j <= c + 10; j++)
		{
			a[i][j] = 1;
		}
	}
}