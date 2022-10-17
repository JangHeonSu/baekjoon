#include <cstdio>

int main()
{
	int N,amount = 0;
	char t[101] = { 0 };
	scanf("%d", &N);
	scanf("%s", t);

	for (int i = 0; i < N; i++)
	{
		amount += (t[i] - 48);
	}
	printf("%d", amount);
	return 0;
}
