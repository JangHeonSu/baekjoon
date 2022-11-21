#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int cal(vector<int> x, vector<int> y)
{
	vector<int> big, small;
	int result = 0;
	if (x[2] > y[2])
	{
		big = x;
		small = y;
	}
	else
	{
		big = y;
		small = x;
	}

	if (big[0] == small[0] && big[1] == small[1] && big[2] == small[2])
		result = -1;

	else if ((double)big[2]> sqrt(pow(x[0] - y[0], 2) + pow(x[1] - y[1], 2)))
	{
		if ((double)(big[2] - small[2]) == sqrt(pow(x[0] - y[0], 2) + pow(x[1] - y[1], 2)))
			result = 1;
		else if ((double)(big[2] - small[2]) > sqrt(pow(x[0] - y[0], 2) + pow(x[1] - y[1], 2)))
			result = 0;
		else if ((double)(big[2] - small[2]) < sqrt(pow(x[0] - y[0], 2) + pow(x[1] - y[1], 2)))
			result = 2;
	}

	else 
	{
		if (sqrt(pow(big[0] - small[0], 2) + pow(big[1] - small[1], 2)) == (double)(big[2] + small[2]))
			result = 1;
		else if (sqrt(pow(big[0] - small[0], 2) + pow(big[1] - small[1], 2)) > (double)(big[2] + small[2]))
			result = 0;
		else if (sqrt(pow(big[0] - small[0], 2) + pow(big[1] - small[1], 2)) < (double)(big[2] + small[2]))
			result = 2;
	}
	return result;
}

int main()
{
	int T, a;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		vector<int>x, y;
		for (int j = 0; j < 3; j++)
		{
			cin >> a;
			x.push_back(a);
		}

		for (int j = 0; j < 3; j++)
		{
			cin >> a;
			y.push_back(a);
		}
		cout << cal(x, y) << '\n';
	}

	return 0;
}