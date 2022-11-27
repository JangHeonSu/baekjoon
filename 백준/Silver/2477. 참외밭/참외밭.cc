#include <iostream>
#include <vector>
using namespace std;

int main() {

	int k,a,j;
	cin >> k;
	vector<int> v;
	vector<int> t;
	vector<int> d;
	int max_v=0, max_t=0;
	

	for (int i = 0; i < 3; i++)
	{
		cin >> j >> a;
		v.push_back(a);
		d.push_back(j);
		cin >> j >> a;
		t.push_back(a);
		d.push_back(j);
	}

	if (d[0]==d[2])
	{
		if (d[1] == d[3])
		{
			cout << (v[2] * t[2] - v[1] * t[0])* k;
		}

		else
		{
			cout << (v[2] * t[1] - v[0] * t[0]) * k;
		}

	}
	else
	{
		if (v[0]<v[1])
		{
			if(t[0]>t[1])
				cout << (v[1] * t[0] - v[2] * t[2]) * k;
			else
				cout << (v[1] * t[1] - v[0] * t[2]) * k;
		}

		else
		{
			if (d[1] == d[3])
				cout << (v[0] * t[2] - v[1] * t[1]) * k;
			else
				cout << (v[0] * t[0] - v[2] * t[1]) * k;
		}
	}
	return 0;
}