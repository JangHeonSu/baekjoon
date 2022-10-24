#include <cstdio>


int main()
{
	int N[9][9] = { 0, };
	int a,b,max = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &N[i][j]);
			if (max <= N[i][j])
            {
                max = N[i][j];
                a=i;
                b=j;
            }
		}
	}

	printf("%d\n%d %d",max, a+1, b+1);


	return 0;
}
