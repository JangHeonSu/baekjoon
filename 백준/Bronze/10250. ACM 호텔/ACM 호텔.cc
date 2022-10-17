#include <cstdio>

int main()
{
	int T, H, W, N,a,b;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		a = (N / H);
		b = (N % H);
		if (N % H > 0)
			a++;
		if (N % H == 0)
			b = H;

		a += b * 100;
		printf("%d\n", a);
	}

	return 0;
}
