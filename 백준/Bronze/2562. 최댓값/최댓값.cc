#include <cstdio>

int main(void)
{
	int Max,num[9];
	Max = 0;

	for(int i=0;i<9;i++)
	{
		scanf("%d", &num[i]);

		if (num[i] > Max)
			Max = num[i];
	}

	printf("%d\n", Max);

	for (int i = 0; i < 9; i++)
	{
		if (Max == num[i])
			printf("%d", i+1);
	}

	return 0;
}