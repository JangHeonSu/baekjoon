#include <cstdio>

int main() {
	int N, k, temp, num[1001];

	scanf("%d %d", &N, &k);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (num[i] < num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("%d", num[k - 1]);

	return 0;
}