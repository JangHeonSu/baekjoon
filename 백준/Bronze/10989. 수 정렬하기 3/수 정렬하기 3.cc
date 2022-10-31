#include <iostream>

int num[10001] = { 0 };

int main() {

	int N, k;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &k);
		num[k]++;
	}
	for (int i = 0; i < 10001; i++)
	{
		while (1)
		{
			if (num[i] > 0)
				printf("%d\n", i);
			else
				break;

			num[i]--;
		}
	}

	return 0;
}