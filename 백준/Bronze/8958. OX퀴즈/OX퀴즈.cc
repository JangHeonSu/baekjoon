#include <cstdio>

int main(void)
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
        char test[81]={0,};
		int a = 1;
		int amount = 0;
		scanf("%s", test);

		for (int i = 0; i < 80; i++)
		{
			if (test[i] == 'O')
			{
				amount += a;
				a++;
			}
			else
				a = 1;
		}
		printf("%d\n", amount);
	}

	return 0;
}