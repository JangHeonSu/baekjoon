#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) 
{
	int answer = 0;
	map<int, int>m;
	vector<int>v;
	for (int i = 0; i < tangerine.size(); i++)
	{
		m[tangerine[i]]++;
	}

	for (int i = 0; i < m.size(); i++)
	{
		if (m[i] != 0)
			v.push_back(m[i]);
	}
	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; k > 0; i++)
	{
		k -= v[i];
		answer++;
	}

	return answer;
}