#include <iostream>


using namespace std;

int main()
{
	int x[1001] = { 0 };
	int a,y[1001] = { 0 };
	int h,s,count = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		x[a]++;

		cin >> a;
		y[a]++;
	}

	for (int i = 0; i < 1001; i++)
	{
		if (count == 2)
			break;
		if (x[i] == 1)
		{
			h = i;
			count++;
		}
		if (y[i] == 1)
		{
			s = i;
			count++;
		}
	}

	cout << h << ' ' << s;

	return 0;
}