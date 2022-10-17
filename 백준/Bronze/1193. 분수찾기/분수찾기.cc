#include <cstdio>

int main()
{
	int N,k=0;
	int a = 0;
	int b = 0;
	int i = 0;
	int t = 0;
	scanf("%d",& N);

	while (1)
	{
		if (N > k)
		{
			k += 3 + 4 * i;
			i++;
		}
		else if (k > 3)
		{
			a = 2*i;
			b = 1;
			break;
		}
		else
			break;
	}

	while (1)
	{
		if (N == k)
		{
			break;
		}
		else if (N < k && a>1)
		{
			k--;
			a--;
			b++;
		}
		else if (N < k && a == 1)
		{
			k--;
			b--;
			break;
		}
		else
			break;
	}

	while (1)
	{
		if (N == k)
		{
			break;
		}
		else if (N < k)
		{
			k--;
			a++;
			b--;
		}
		else
			break;
	}
	if (N == 1) { a = 1; b = 1; }
	if (N == 2) { a = 1; b = 2; }
	if (N == 3) { a = 2; b = 1; }
	printf("%d/%d",a, b);
	return 0;
}
