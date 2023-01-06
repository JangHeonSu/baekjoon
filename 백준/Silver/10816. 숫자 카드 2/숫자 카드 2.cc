#include <iostream>
#include <map>

using namespace std;
map <int, int> m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, a;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		m.insert(pair<int, int>(a, 0));
		m[a]++;
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> a;
		cout << m[a] << ' ';
	}

	return 0;
}