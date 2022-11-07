#include <iostream>

using namespace std;

int main() {

	int N, k, num[10] = { 1 };
	int count=0;
	scanf("%d %d", &N, &k);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = N-1; i >= 0; i--)
	{
		if (k / num[i] >= 1)
		{
			count += k / num[i];
			k -= num[i] * (k / num[i]);
            if(k==0)
                break;
		}
	}

	printf("%d", count);

	return 0;
}