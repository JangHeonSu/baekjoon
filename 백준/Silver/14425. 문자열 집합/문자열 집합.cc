#include <iostream>
#include <map>

using namespace std;
map<string, bool>m;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, result=0;
	string str;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		m.insert(pair<string, bool>(str,true));
	}

	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (m[str] == true)
			result++;
	}

	cout << result;
}