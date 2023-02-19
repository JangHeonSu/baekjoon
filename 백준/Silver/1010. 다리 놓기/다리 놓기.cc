#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M, pascal[31][31],a=0;

	cin >> T;

	while (a<=30)
	{
		for (int b=0; b <= a; b++)
		{
			if (b == 0 || b == a)
				pascal[a][b] = 1;
			else
			{
				pascal[a][b] = pascal[a - 1][b] + pascal[a - 1][b - 1];
			}
		}
		a++;
	}

	for (int i = 0; i < T; i++)
	{
		cin >> N >> M;
		cout << pascal[M][N] << '\n';
	}


	return 0;
}