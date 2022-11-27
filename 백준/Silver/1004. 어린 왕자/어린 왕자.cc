#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int T,n,x,y,r,a,b,c,d;

	cin >> T;

	while (T > 0)
	{
		int result = 0;
		cin >> a >> b >> c >> d >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y >> r;

			if (pow(x - a, 2) + pow(y - b, 2) < pow(r, 2))
			{
				if (pow(x - c, 2) + pow(y - d, 2) > pow(r, 2))
					result++;
			}
			else
			{
				if (pow(x - c, 2) + pow(y - d, 2) < pow(r, 2))
					result++;
			}

		}
		T--;
		cout << result << '\n';
	}
	
	
	return 0;
}