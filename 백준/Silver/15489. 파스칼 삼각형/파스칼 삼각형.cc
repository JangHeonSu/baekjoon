#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int pascal[31][31];
	int R, C, W, res=0;


	cin >> R >> C >> W;

	for (int i = 1; i < 31; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i)
				pascal[i][j] = 1;
			else
				pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
	}

	for (int k = 0; k < W; k++)
	{
		for (int n = 0; n <= k; n++)
		{
			res += pascal[R+k][C+n];
		}
	}

	cout << res;

	return 0;
}