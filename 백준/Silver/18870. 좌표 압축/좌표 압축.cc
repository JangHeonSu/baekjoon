#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int num[1000001];
vector <int> ranking;

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		ranking.push_back(num[i]);
	}

	sort(ranking.begin(), ranking.end());
	ranking.erase(unique(ranking.begin(), ranking.end()), ranking.end());

	for (int j = 0; j < N; j++) {

		auto it = lower_bound(ranking.begin(), ranking.end(), num[j]);
		printf("%d ", it - ranking.begin());
	}

	return 0;
}