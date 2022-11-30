#include <iostream>
using namespace std;

int k = 0, Count = 0;
int su[100] = { 0 };

void Print()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << su[i * 9 + j] << ' ';
		}
		cout << '\n';
	}
}

void check(int i)
{
	if (k == Count)
	{
		Print();
		return;
	}

	int a[10] = { 0 };
	int row = i / 9;
	int col = i % 9;
	int c, v = 0;
	for (int t = row * 9; t < row * 9 + 9; t++)
	{
		a[su[t]]++;
	}

	for (int t = col; t <= 81; t += 9)
	{
		a[su[t]]++;
	}

	if (row % 3 == 1)
		row -= 1;
	else if (row % 3 == 2)
		row -= 2;

	if (col % 3 == 1)
		col -= 1;
	else if (col % 3 == 2)
		col -= 2;

	for (int p = row * 9 + col; p < row * 9 + col + 27; p += 9)
	{
		for (int t = p; t < p + 3; t++)
		{
			a[su[t]]++;
		}
	}

	for (int j = 1; j < 10; j++)
	{
		if (a[j] == 0)
		{
			v++;
			if (v > 1)
				break;
			c = j;
		}
	}

	if (v == 1)
	{
		su[i] = c;
		k++;
		for (int t = i + 1; t <= 81; t++)
			{
				if (su[t] == 0)
				{
					check(t);
					if (k == Count)
						return;
					su[t] = 0;
					k--;
					return;
				}
			}
	}
	else if (v == 0)
	{
		return;
	}
	else
	{
		for (int j = 1; j < 10; j++)
		{
			if (a[j] == 0)
			{
				su[i] = j;
				k++;
				for (int t = i + 1; t <= 81; t++)
				{
					if (su[t] == 0)
					{
						check(t);
						if (k == Count)
							return;
						su[t] = 0;
						k--;
						break;
					}
				}
			}
		}
	}

}


int main() {

	for (int i = 0; i < 81; i++)
	{
		cin >> su[i];
		if (su[i] == 0)
			Count++;
	}

	for (int i = 0; i <= 81; i++)
	{
		if (su[i] == 0)
		{
			check(i);
			break;
		}
	}
	return 0;
}