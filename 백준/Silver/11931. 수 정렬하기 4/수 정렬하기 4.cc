#include <cstdio>

int num[2000002];
//Max heap을 통한 -100~+100만 까지의 값 오름차순 정렬
//시간 복잡도 O(N)+(ONlogN) = O(NlogN)

void left_child(int i);
void right_child(int i);
int pop();

int main() {

	for (int i = 0; i <= 2000001; i++)
	{
		num[i] = -1000001;
	}

	int N;
	scanf_s("%d", &N);

	scanf_s("%d", &num[1]);
	for (int i = 2; i <= N; i++)
	{
		scanf_s("%d", &num[i]);

		if (i % 2 == 0)
		{
			left_child(i);
		}
		else
		{
			right_child(i);
		}
	}

	for (int i = 1; i <= N; i++)
	{
		printf("%d\n", pop());
	}

	return 0;
}

void left_child(int i)
{
	int temp;

	if (num[i / 2] < num[i])
	{
		temp = num[i / 2];
		num[i / 2] = num[i];
		num[i] = temp;

		if (i / 2 > 1)
		{
			if ((i / 2) % 2 == 0)
				left_child(i / 2);
			else
				right_child(i / 2);
		}
	}
}

void right_child(int i)
{
	int temp;

	if (num[(i - 1) / 2] < num[i])
	{
		temp = num[(i - 1) / 2];
		num[(i - 1) / 2] = num[i];
		num[i] = temp;
		if ((i - 1) / 2 > 1)
		{
			if (((i - 1) / 2) % 2 == 0)
				left_child((i - 1) / 2);
			else
				right_child((i - 1) / 2);
		}
	}
}

int pop() {

	int result = num[1];
	int i = 1;
	while (1)
	{

		if (num[2 * i] == -1000001 && num[2 * i + 1] == -1000001)
		{
			num[i] = -1000001;
			break;
		}

		if (num[2 * i] < num[2 * i + 1])
		{
			num[i] = num[2 * i + 1];
			i = 2 * i + 1;
		}
		else
		{
			num[i] = num[2 * i];
			i = 2 * i;
		}

	}

	return result;
}
