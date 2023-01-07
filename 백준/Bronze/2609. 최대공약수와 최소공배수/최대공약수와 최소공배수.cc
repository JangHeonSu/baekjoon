#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,b,max, min,temp;

	cin >> max >> min;
	a = max;
	b = min;

	if (max > min)
	{
	}
	else
	{
		temp = max;
		max = min;
		min = temp;
	}

	while (1)
	{
		if (max % min == 0)
			break;
		else
		{
			temp = max%min;
			max = min;
			min = temp;
		}
	}

	cout << min << '\n' << a * b / min;
	
	return 0;
}