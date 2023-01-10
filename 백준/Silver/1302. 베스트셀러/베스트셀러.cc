#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
map<string, int>m;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second > b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string str;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		m[str]++;
	}

	vector<pair<string, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), cmp);

	cout << v[0].first;


	return 0;
}