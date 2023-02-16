#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, anw=1;

	cin >> a >> b;
	
	if (b == 0)
		anw = 1;

	for (int i = 0; i < b; i++)
	{
		anw *= (a--);
		anw /= (i + 1);
	}

	cout << anw;

	return 0;
}