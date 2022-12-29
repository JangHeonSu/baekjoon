#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

unsigned char num[2500001] = { 0, };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0, M, N, a,index,value;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		a += 10000000;
		index = a / 8;	
		value = pow(2, a % 8);
		num[index] = num[index] | value;
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> a;
		a += 10000000;
		index = a / 8;
		value = pow(2, a % 8);
		if ((num[index]&value)==value)
			t = 1;
		else
			t = 0;
		cout << t << ' ';
	}

	return 0;
}