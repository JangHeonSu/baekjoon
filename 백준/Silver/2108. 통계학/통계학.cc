#include <iostream>
#include <algorithm>

using namespace std;

int num[500001] = { 0 };
int a[2][4001] = { 0 };

int average(int num[],int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum +=num[i];
	}

	if (sum >= 0)
	{
		if ((sum % N) * 10 / N >= 5)
			return (sum / N) + 1;
		else
			return (sum / N);
	}
	else
	{
		if ((sum % N*-1) * 10 / N >= 5)
			return (sum / N) - 1;
		else
			return (sum / N);
	}
}


int mid(int num[],int N)
{
	return num[N / 2];
}

int freq(int num[], int N)
{
	int c,v,max = 0;
	for (int i = 0; i < N; i++)
	{
		if (num[i] < 0)
			a[0][-1*num[i]]++;
		else
			a[1][num[i]]++;
	}
	for (int i = 4000; i >0; i--)
	{
		if (max < a[0][i])
		{
			max = a[0][i];
			c = 0;
			v = i;
		}
	}

	for (int i = 0; i < 4001; i++)
	{
		if (max < a[1][i])
		{
			max = a[1][i];
			c = 1;
			v = i;
		}
	}

		for (int i = v - 1; i > 0; i--)
		{
			if (max == a[0][i])
				return i*-1;
		}

		if (c == 0)
		{
			for (int i = 0; i <= 4000; i++)
			{
				if (max == a[1][i])
					return i;
			}
		}

		if (c == 1)
		{
			for (int i = v + 1; i <= 4000; i++)
			{
				if (max == a[1][i])
					return i;
			}
		}
	
		if (c == 0)
			return v * -1;
		else
			return v;
}

int range(int num[], int N)
{
	return num[N - 1] - num[0];
}



int main() {

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	sort(num, num + N);

	printf("%d\n", average(num,N));
	printf("%d\n", mid(num,N));
	printf("%d\n", freq(num,N));
	printf("%d\n", range(num,N));
	
	return 0;
}