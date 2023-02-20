#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, t=0,f=0;

	cin >> N >> M;

	for (long long i=5;i <= N;i*=5)
	{
		f += N / i;
	}

	for (long long i = 2; i <= N; i *= 2)
	{
		t += N / i;
	}

	for (long long i = 5; i <= M; i *= 5)
	{
		f -= M / i;
	}

	for (long long i = 2; i <= M; i *= 2)
	{
		t -= M / i;
	}

	for (long long i = 5; i <= N-M; i *= 5)
	{
		f -= (N-M) / i;
	}

	for (long long i = 2; i <= N - M; i *= 2)
	{
		t -= (N - M) / i;
	}

	cout << (t < f ? t : f);

	return 0;
}