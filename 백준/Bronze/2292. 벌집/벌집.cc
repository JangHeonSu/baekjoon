#include <cstdio>

int main()
{
	int N,k=2;
	int i = 1;
	scanf("%d",& N);

	while (1)
	{
		if (N >= k)
		{
			k += 6 * i;
			i++;
		}
		else
		{
			k = i;
			break;
		}
			
	}
	printf("%d", k);
	return 0;
}
