#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N, M;
	char W[8][8]={0};
	char B[8][8]={0};
	char v[51][51] = { 0 };
	cin >> N >> M;

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 8; j += 2)
			{
				W[i][j] = 'W';
				W[i][j + 1] = 'B';
				B[i][j] = 'B';
				B[i][j + 1] = 'W';
			}
		}
		else
		{
			for (int j = 1; j < 8; j += 2)
			{
				W[i][j] = 'W';
				W[i][j - 1] = 'B';
				B[i][j] = 'B';
				B[i][j - 1] = 'W';
			}
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> v[i][j];
		}
	}

	int f = 0,max=0;
	while (N - 8 >= f)
	{
		int g = 0;

		while (M - 8 >= g)
		{
			int countw = 0, countb = 0;
			int b = 0;
			for (int i = f; i < f+8; i++)
			{
				int c = 0;
				for (int j = g; j < g+8; j++)
				{
					
					if (v[i][j] == W[b][c])
						countw++;
					if (v[i][j] == B[b][c])
						countb++;
					c++;
				}
				b++;
			}
			if (countw > max)
				max = countw;

			if (countb > max)
				max = countb;

			g++;
		}
		f++;
	}

	cout << 64 - max;
}