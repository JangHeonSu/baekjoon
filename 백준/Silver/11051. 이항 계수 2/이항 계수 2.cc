#include <iostream>

using namespace std;

int pascal[1001][1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K, a=0;

	cin >> N >> K;

	while (a<=1000)
	{
		for (int i = 0; i <= a; i++)
		{
			if (i == 0||a==i)
				pascal[a][i] = 1;
			else
			{
				pascal[a][i] = (pascal[a - 1][i] + pascal[a - 1][i - 1]) % 10007;
			}
		}
		a++;
	}

	cout << pascal[N][K];

	return 0;
}