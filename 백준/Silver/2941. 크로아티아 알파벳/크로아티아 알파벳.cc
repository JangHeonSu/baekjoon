#include <cstdio>



int main()
{
	int count = 0;
	char str[1000001];
	scanf("%s", str);

	for (int i = 0; str[i]!=0; i++) 
	{
		if (str[i] == 'c')
		{
			if (str[i + 1] == '-' || str[i + 1] == '=')
				continue;
			else
				count++;
		}
		else if (str[i] == 'd')
		{
			if (str[i + 1] == '-' || (str[i + 1] == 'z' && str[i + 2] == '='))
				continue;
			else
				count++;
		}
		else if (str[i] == 'l')
		{
			if (str[i + 1] == 'j')
				continue;
			else
				count++;
		}
		else if (str[i] == 'n')
		{
			if (str[i + 1] == 'j')
				continue;
			else
				count++;
		}
		else if (str[i] == 's')
		{
			if (str[i + 1] == '=')
				continue;
			else
				count++;
		}
		else if (str[i] == 'z')
		{
			if (str[i + 1] == '=')
				continue;
			else
				count++;
		}
		else
			count++;
		
	}

	printf("%d", count);

	return 0;
}
