#include <iostream>	
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<pair<int,string>> v;

int main() {

	int N;
	string p;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		cin >> p;
		v.push_back({ p.length(),p });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		if (i < N - 1)
		{
			if (v[i].second != v[i + 1].second)
				cout << v[i].second << endl;
		}
		else
		{
			if (i == N - 1)
				cout << v[i].second << endl;
		}
	}

	return 0;
}