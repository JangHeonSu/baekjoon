#include <cstdio>

int main(void)
{
	int C;
	scanf("%d", &C);

	for (int i = 0; i < C; i++)
	{
		int N, score[1001] = { 0 };
		scanf("%d", &N);
		float count = 0;
		float avg = 0;

		for (int i = 0; i < N; i++)
		{
			scanf("%d",&score[i]);
			avg += score[i];
		}
		avg = avg / N;

		for (int i = 0; i < N; i++)
		{
			if (score[i] > avg)
				count++;
		}
		count = count * 100 / N;
		printf("%.3f%%\n", count);
	}

	return 0;
}