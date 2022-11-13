#include <iostream>
#include <algorithm>

using namespace std;
int a=0;

void num(int n)
{
	if (n > 665)
	{
		if (n % 10 == 6)
		{
			if (n / 10 % 10 == 6)
			{
				if (n / 10 / 10 % 10 == 6)
					a++;
				else
					num(n / 10 / 10 / 10);
			}
			else
				num(n / 10 / 10);
		}
		else
			num(n / 10 );
	}

}


int main() {

	int N,i=666;
	
	cin >> N;

	while (1)
	{
		num(i);
		if (a == N)
		{
			cout << i;
			break;
		}
		i++;
	}

    return 0;
}