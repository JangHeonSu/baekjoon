#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,t,a,b,c,first=0;
	vector<int> v;
	vector<pair<int, int>> gcd;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		v.push_back(t);
		if(first==0)
			first = t;
		else
		{
			c = first;
			a = t;
			while (1)
			{
				if (c % a == 0)
				{
					gcd.push_back({ (first / a), t/a });
					break;
				}
				else
				{
					b = c;
					c = a;
					a = b % a;
				}
			}
		}
	}

	for (int i = 0; i < N - 1; i++)
	{
		cout << gcd[i].first << '/' << gcd[i].second<<'\n';
	}

	return 0;
}