#include <iostream>
using namespace std;

long long int fib[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,P,Q;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> P >> Q;

		fib[0] = 1%Q;
		fib[1] = 1%Q;

		for (int i = 2; i <= P; i++)
		{
			fib[i] = (fib[i - 2] + fib[i - 1])%Q;
		}

		cout << "Case #" << i+1 << ": " << fib[P - 1] <<'\n';
	}

	return 0;
}