#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, C, coin[4] = { 25,10,5,1 };

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> C;

		for (int j = 0; j < 4; j++)
		{
			cout << C / coin[j] << ' ';
			C %= coin[j];
		}
		cout << '\n';
	}

	return 0;
}
