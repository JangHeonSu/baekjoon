#include <iostream>

int main() {

	char N[11] = { 0 };
	scanf("%s", N);

	for (int j = 0; N[j] != 0; j++) 
	{
		int max = 0;
		for (int i = j; N[i] != 0; i++)
		{
			if (N[i] > max)
			{
				max = N[i];
				N[i] = N[j];
				N[j] = max;
			}

		}
	}

	printf("%s", N);
	return 0;
}