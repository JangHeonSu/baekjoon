#include <cstdio>
int d(int num);

int main()
{

	for (int i = 1; i <= 10000; i++)
	{
		if (d(i) == -1)
			continue;
		else
			printf("%d\n", d(i));
	}

	return 0;
}



int d(int num)
{
	for (int i = num - 36; i < num; i++)
	{
		if (num == i + (i / 1000) + (i % 1000) / 100 + ((i % 1000) % 100) / 10 + ((i % 1000) % 100) % 10)
			return -1;
		else if (i == num - 1)
			return num;
	}

}