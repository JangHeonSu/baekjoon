#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K, W, V;
	vector<pair<int, int>> v;
	vector<vector<int>> dp;

	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> W >> V;
		v.push_back({ W,V });
		dp.push_back({ 0 });
	}

	for (int i = 1; i <= K; i++)
	{
		if (i < v[0].first)
			dp[0].push_back(0);
		else
			dp[0].push_back(v[0].second);
	}

	for (int j = 1; j < N; j++)
	{
		for (int i = 1; i <= K; i++)
		{
			if (i < v[j].first)
			{
				dp[j].push_back(dp[j - 1][i]);
			}
			else
			{
				if (v[j].second + dp[j - 1][i - v[j].first] > dp[j - 1][i])
					dp[j].push_back(v[j].second + dp[j - 1][i - v[j].first]);
				else
					dp[j].push_back(dp[j - 1][i]);
			}
		}
	}

	cout << dp[N - 1][K];

	return 0;
}