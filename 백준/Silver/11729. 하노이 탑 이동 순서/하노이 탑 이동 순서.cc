#include <iostream>

int hanoi(int N)
{
	if (N == 1)
		return 1;
	else
		return hanoi(N - 1)*2 + 1;
}

void route(int now, int dest, int count)
{
	if (count == 1)
		printf("%d %d\n", now, dest);

	else
	{
		route(now, 6 - dest - now, count - 1);
		printf("%d %d\n", now, dest);
		route(6 - dest - now, dest, count - 1);
	}
}

int main() {

	int N;

	scanf("%d", &N);

	printf("%d\n", hanoi(N));
	route(1,3,N);

}