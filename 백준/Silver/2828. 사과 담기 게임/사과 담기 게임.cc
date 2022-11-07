#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N, M,J,a=1;
	int count=0;
	scanf("%d %d", &N, &M);
	scanf("%d", &J);
	int num[21];

	for (int i = 0; i < J; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < J; i++)
	{
		if (num[i] <= M)
		{
			if (num[i] < a)
			{
				count+= a - num[i];
				M -= a - num[i];
				a = num[i];
			}
			else
				continue;
		}
		else
		{
			count += num[i] - M;
			a += num[i] - M;
			M = num[i];
		}	
	}

	printf("%d", count);

	return 0;
}