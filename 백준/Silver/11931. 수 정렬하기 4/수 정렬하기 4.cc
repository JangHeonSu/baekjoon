#include <iostream>
#include <algorithm>

using namespace std;

int num[1000001];

bool comp(int a, int b)
{
	return a > b;
}

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	
	sort(num, num+N,comp);

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}
