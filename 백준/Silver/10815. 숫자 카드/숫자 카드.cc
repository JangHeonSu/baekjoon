#include <cstdio>
#include <iostream>
using namespace std;

int num[20000002] = { 0, };

int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
	
    int t = 0, M, N, a;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		a += 10000000;
		num[a]++;
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> a;
		a += 10000000;
		if (num[a] != 0)
			t = 1;
		else
			t = 0;
		cout << t << ' ';
	}

	return 0;
}