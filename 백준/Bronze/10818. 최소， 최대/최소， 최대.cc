#include <cstdio>

int N[1000000];

int main(void)
{
	int num,Min,Max;
	scanf("%d", &num);
	Min = 1000000;
	Max = -1000000;
	for(int i=0;i<num;i++)
	{
		scanf("%d", &N[i]);

		if (N[i] < Min)
			Min = N[i];
		if (N[i] > Max)
			Max = N[i];
	}

	printf("%d %d", Min, Max);

	return 0;
}