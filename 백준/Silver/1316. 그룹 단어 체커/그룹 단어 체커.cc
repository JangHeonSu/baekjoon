#include <cstdio>

int main()
{
	int N,count=0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		char str[101];
		scanf("%s", str);
		int check = 0;
		for (int j = 0; str[j] != 0; j++)
		{
			if (str[j] == str[j + 1])
				continue;
			else
			{
				for (int k = j + 1; str[k] != 0; k++)
				{
					if (str[j] == str[k])
					{
						check = -1;
						break;
					}
				}
				if (check == -1)
					break;
			}
		}
		if (check != -1)	
		count++;
	}

	printf("%d", count);



	return 0;
}
