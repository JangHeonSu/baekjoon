#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
map <string, bool> s;
vector <string> v;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M,res=0;
	string str;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		s.insert(pair<string, bool>(str, true));
	}

	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (s[str] == true)
		{
			res++;
			v.push_back(str);
		}
	}

	cout << res <<'\n';

	sort(v.begin(), v.end());
	for (int i = 0; i < res; i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}