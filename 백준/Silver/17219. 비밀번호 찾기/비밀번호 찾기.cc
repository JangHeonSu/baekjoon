#include <iostream>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	map<string, string>m;

	string str,pw;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		cin >> pw;
		m[str] = pw;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> str;
		cout << m[str] << '\n';
	}

	return 0;
}