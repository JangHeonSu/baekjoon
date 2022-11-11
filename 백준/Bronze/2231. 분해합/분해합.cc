#include <iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = N - 55; i < N; i++)
	{
		if (i + i % 10 + (i / 10) % 10 + (i / 10 / 10) % 10 + (i / 10 / 10 / 10) % 10 +
			(i / 10 / 10 / 10 / 10) % 10 + (i / 10 / 10 / 10 / 10 / 10) % 10 == N)
			{
				cout << i;
				break;
			}
		else if(i==N-1)
			cout << 0;
	}

	return 0;
}