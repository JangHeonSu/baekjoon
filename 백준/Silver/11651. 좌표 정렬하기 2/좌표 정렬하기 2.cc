#include <iostream>	
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;

int main() {

	int N,x,y;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &x, &y);
		v.push_back({ y,x });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		printf("%d %d\n", v[i].second, v[i].first);
	}
	
	return 0;
}