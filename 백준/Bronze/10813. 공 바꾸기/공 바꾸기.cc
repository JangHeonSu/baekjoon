#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M,j,k,temp;
	int num[101];

	cin >> N >> M;

	for (int i = 0; i <= N; i++)
	{
		num[i] = i;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> j >> k;

		temp = num[j];
		num[j] = num[k];
		num[k] = temp;
	}

	for (int i = 1; i <= N; i++)
	{
		cout << num[i] << ' ';
	}

	return 0;
}