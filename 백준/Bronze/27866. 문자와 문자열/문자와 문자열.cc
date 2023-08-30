#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	int a;

	cin >> S >> a;

	cout << S[a - 1];

	return 0;
}