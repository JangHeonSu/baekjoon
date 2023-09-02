#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, a = 1, res= 2;

	cin >> N;

	while (a <= N)
	{
		res += res - 1;
		a++;
	}

	cout << res*res;

	return 0;
}