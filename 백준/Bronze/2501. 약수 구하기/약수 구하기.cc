#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K,count=0;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			count++;
		if (count == K)
		{
			cout << i;
			break;
		}
		else if(i==N)
		{
			cout << 0;
		}
	}

	return 0;
}