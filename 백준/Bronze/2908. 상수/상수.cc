#include <cstdio>

int main()
{
	int num1, num2,temp;
	scanf("%d %d", &num1, &num2);

	temp = num1 / 100 + (num1 % 10) * 100 + ((num1 / 10) % 10) * 10;
	num1 = temp;

	temp = num2 / 100 + (num2 % 10) * 100 + ((num2 / 10) % 10) * 10;
	num2 = temp;

	if (num1 < num2)
		printf("%d", num2);
	else
		printf("%d", num1);

	return 0;
}
