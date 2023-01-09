#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
	return a.second > b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M,a;
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		queue<pair<int, int>>q;
		vector<pair<int, int>> v;
		int k = 0;
		cin >> N >> M;

		for (int j = 0; j < N; j++)
		{
			cin >> a;
			q.push({ j,a });
			v.push_back({ j,a });
		}

		sort(v.begin(), v.end(),cmp);

		while(1)
		{
			if (v[k].second == q.front().second)
			{
				if (q.front().first == M)
				{
					cout << k + 1 << '\n';
					break;
				}
				q.pop();
				k++;
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
		}
	}

	return 0;
}