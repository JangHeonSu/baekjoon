#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <=2 * N - 1; i++)
	{
		for (int j = 0; j <abs(N-i); j++)
		{
			cout << ' ';
		}

		if(i<=N)
			for (int j = 0; j < (2*i-1); j++)
			{
				cout << '*';
			}
		else
			for (int j = 0; j < 4*N-2*i-1; j++)
			{
				cout << '*';
			}

		/*for (int j = 0; j < abs(N - i); j++)
		{
			cout << ' ';
		}*/

		if (i == 2 * N - 1)
			break;
		cout << '\n';
	}

	return 0;
}