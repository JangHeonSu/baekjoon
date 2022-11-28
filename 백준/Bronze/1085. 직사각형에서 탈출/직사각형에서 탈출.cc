#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x[4],w,h;

	for (int i = 0; i < 2; i++)
	{
		cin >> x[i];
	}

	cin >> w >> h;
	x[2] = w - x[0];
	x[3] = h - x[1];
	sort(x, x + 4);

	cout << x[0];

	return 0;
}