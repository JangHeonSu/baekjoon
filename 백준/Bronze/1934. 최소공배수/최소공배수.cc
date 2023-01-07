#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T,a,b,max,min,temp;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		
		max = a >= b ? a : b;
		min = a <= b ? a : b;

		while (1)
		{
			if (max % min == 0)
				break;
			else
			{
				temp = max % min;
				max = min;
				min = temp;
			}
		}

		cout << a * b/min << '\n';
	}
	
	return 0;
}