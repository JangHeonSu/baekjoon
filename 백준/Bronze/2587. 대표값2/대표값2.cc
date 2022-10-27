#include <cstdio>

int main() {
	int num[5], temp, count = 0;

	for(int i =0; i<5;i++)
	{
		scanf("%d", &num[i]);
		count += num[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (num[j] < num[i])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("%d\n%d", count / 5, num[2]);

	return 0;
}