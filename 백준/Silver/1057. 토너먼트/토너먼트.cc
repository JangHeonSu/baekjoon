#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N, a, b,count=1;

	cin >> N >> a >> b;

	a -= 1;
	b -= 1;
	while (1)
	{
		if (a / 2 == b / 2)
			break;
		else
		{
			a = a / 2;
			b = b / 2;
			count++;
		}
	}
	cout << count;

	return 0;
}