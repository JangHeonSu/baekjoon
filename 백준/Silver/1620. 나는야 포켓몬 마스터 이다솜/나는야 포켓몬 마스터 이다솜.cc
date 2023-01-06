#include <iostream>
#include <map>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string,int> m1;
	map<int, string> m2;
	char s[21];

	int N,M;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		m1.insert(pair<string, int>(s, i));
		m2.insert(pair<int, string>(i, s));
	}

	for (int i = 0; i < M; i++)
	{
		cin >> s;
		if (isdigit(s[0]))
		{
			cout << m2[atoi(s)-1] << '\n';
		}
		else
		{
			cout << m1[s]+1 << '\n';
		}
	}

	return 0;
}