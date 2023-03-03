#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num[101] = { 0, };
	int N, M, i, j, k;

	cin >> N >> M;

	for (int t = 0; t < M; t++)
	{
		cin >> i >> j >> k;

		for (int d = i - 1; d < j; d++)
		{
			num[d] = k;
		}
	}

	for (int t = 0; t < N; t++)
	{
		cout << num[t] << ' ';
	}

	return 0;
}