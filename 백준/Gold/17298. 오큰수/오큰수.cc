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

	vector<int>v;
	stack<int>res,big;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	res.push(-1);

	for (int i = N - 1; i > 0; i--)
	{
		if (v[i-1] >= v[i])
		{
			while (!big.empty())
			{
				if (v[i - 1] >= big.top())
					big.pop();
				else
				{
					res.push(big.top());
					big.push(v[i - 1]);
					break;
				}
			}
			if (big.empty())
			{
				big.push(v[i - 1]);
				res.push(-1);
			}
		}
		else
		{
			res.push(v[i]);
			big.push(v[i]);
		}
	}

	while (!res.empty())
	{
		cout << res.top() << ' ';
		res.pop();
	}

	return 0;
}