#include <cstdio>

int main()
{
	int T,R=0;

	char S1[21] = { 0 };
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
        char S2[168] = { 0 };
		scanf("%d %s", &R,S1);
		int k = R;
		int p = 0;
		for (int j = 0; j < 21; j++)
		{
			if (S1[j] == 0)
				break;
				for (; p < k; p++)
				{
					S2[p] = S1[j];
				}
				k += R;
		}
		for (int j = 0; j < 168; j++)
		{
			if (S2[j] == 0)
				break;
			printf("%c", S2[j]);
		}
		printf("\n");
	}
	return 0;
}
