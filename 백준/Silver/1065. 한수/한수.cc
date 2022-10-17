#include <cstdio>
int d(int num);

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d",d(N));

	return 0;
}

int d(int num)
{
	int count = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i < 100)
			count++;
		else
		{
			if (i / 100 - (i / 10) % 10 == (i / 10) % 10 - i % 10)
				count++;
		}
	}

	return count;
}