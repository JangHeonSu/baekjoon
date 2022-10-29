#include <cstdio>

int fact(int a);

int main() {
	int N;

	scanf("%d", &N);

	printf("%d",fact(N));
	return 0;
}

int fact(int a) {
	int ans;

	if (a == 0)
		return 1;

	ans = a * fact(a - 1);

	return ans;
}
