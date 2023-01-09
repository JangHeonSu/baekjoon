#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v,sort_v;
	vector<string> res;
	stack<int>s;
	int N,a,k=0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	sort_v = v;

	sort(sort_v.begin(), sort_v.end());
	

	for (int i = 0; i < N; i++)
	{
		if (s.size() == 0)
		{
			s.push(sort_v[i]);
			res.push_back("+");
			continue;
		}

		if (v[k] == s.top())
		{
			s.pop();
			res.push_back("-");
			i--;
			k++;
		}
		else 
		{
			s.push(sort_v[i]);
			res.push_back("+");
		}
	}

	while (s.size() > 0)
	{
		if (v[k] == s.top())
		{
			s.pop();
			res.push_back("-");
			k++;
		}
		else
		{
			cout << "NO";
			break;
		}
	}

	if (s.size() == 0)
	{
		for (int i = 0; i < res.size(); i++)
		{
			cout << res[i] << '\n';
		}
	}

	return 0;
}