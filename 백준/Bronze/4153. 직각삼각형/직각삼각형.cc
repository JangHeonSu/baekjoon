#include <iostream>
#include <math.h>
using namespace std;

void check(int a, int b, int c)
{
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if(pow(max,2)*2==pow(a,2)+ pow(b, 2)+ pow(c, 2))
	cout << "right"<<'\n';
	else
	cout << "wrong" << '\n';
}

int main() {
	int a=1,b=1,c=1;

	while (1)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		check(a, b, c);
	}
	return 0;
}