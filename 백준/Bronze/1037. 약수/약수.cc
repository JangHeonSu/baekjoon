#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> v;

	int N, M;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> M;
		v.push_back(M);
	}

	sort(v.begin(), v.end());
	
	cout << v[0] * v[N-1];


	return 0;
}