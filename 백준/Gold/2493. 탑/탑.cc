#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,a;

	cin >> N;

	vector<pair<int, int>> v;
	vector<int> res;
	stack<pair<int,int>> big;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		v.push_back({ a,i + 1 });
	}

	res.push_back(0);

	for (int i = 0; i < N-1; i++)
	{
		if (v[i].first >= v[i+1].first)
		{
			res.push_back(v[i].second);
			big.push(v[i]);
		}
		else
		{
			while (!big.empty())
			{
				if (v[i + 1].first > big.top().first)
				{
					big.pop();
					continue;
				}
				else
				{
					res.push_back(big.top().second);
					big.push(v[i + 1]);
					break;
				}
			}
			
			if (big.empty())
			{
				big.push(v[i + 1]);
				res.push_back(0);
			}
		}	
	}

	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << ' ';
	}

	return 0;
}