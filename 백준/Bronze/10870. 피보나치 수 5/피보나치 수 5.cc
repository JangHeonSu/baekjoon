#include <cstdio>

int fibo(int n);

int main() {
	int N;

	scanf("%d", &N);

	printf("%d",fibo(N));
	return 0;
}

int fibo(int n) {
	int ans;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	ans = fibo(n-2) + fibo(n - 1);

	return ans;
}
