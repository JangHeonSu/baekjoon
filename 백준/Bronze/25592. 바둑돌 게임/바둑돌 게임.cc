#include <iostream>

using namespace std;

int check(int *N)
{
	int i = 1, turn=0;
	while (*N > 0)
	{
		*N = *N - i;
		i++;
		turn++;
	}

	if ((*N) == 0)
	{
		if (turn % 2 == 0)
			return i;
		else
			return 0;
	}
	else
	{
		if (turn % 2 != 0)
			return (*N) * -1;
		else
			return 0;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	cout << check(&N);


	return 0;
}