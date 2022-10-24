#include <cstdio>

char A[10002] = { 0,};
char B[10002] = { 0,};
char C[10003] = { 0,};

int main()
{
	int a, b,count=0;

	for (int i = 0; i<10002; i++)
	{
		scanf("%c", &A[i]);
		if (A[i] == '\n' || A[i] == ' ')
		{
			A[i] = 0;
			a = i-1;
			break;
		}
	}

	for (int i = 0; i < 10002; i++)
	{
		scanf("%c", &B[i]);
		if (B[i] == '\n' || B[i] == ' ')
		{
			B[i] = 0;
			b = i-1;
			break;
		}
	}

	for (int i = 0; i <= 10002; i++)
	{
		if (a >= 0 || b >= 0)
		{
			if (a == -1)
			{
				C[i] = (B[b] - 48 + count) % 10 + 48;
				if ((B[b] - 48) + count >= 10)
					count = 1;
				else
					count = 0;
			}
			else if (b == -1)
			{
				C[i] = (A[a] - 48 + count) % 10 + 48;

				if ((A[a] - 48) + count >= 10)
					count = 1;
				else
					count = 0;
			}
			else
			{
				C[i] = (((A[a] - 48) + (B[b] - 48)) % 10 + count) % 10 + 48;

				if ((A[a] - 48) + (B[b] - 48) + count >= 10)
					count = 1;
				else
					count = 0;
			}
		}
		else
		{		if (count == 1)
				C[i] = count + 48;
				break;
		}

		if (a >= 0)
			a--;

		if (b >= 0)
			b--;

	}


	for (int i = 10002; i>=0; i--)
	{
		if(C[i]!=0)
		printf("%c", C[i]);
	}

	return 0;
}
