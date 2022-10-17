#include <cstdio>
int sub[1000];

int main(void)
{
	int N, Max = 0;
	int Amount = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d",&sub[i]);

		if (sub[i] > Max)
			Max = sub[i];
		Amount += sub[i];
	}

	
	printf("%f", Amount * 100 / (float)Max / N);


	return 0;
}