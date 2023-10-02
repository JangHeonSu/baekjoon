#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) 
{
	int boat=0, answer = 0;
	sort(people.begin(), people.end(), greater<>());
	int least = people.size() - 1;

	for (int i = 0; i <= least; i++)
	{
		boat += people[i];

		if (people[least] <= limit - boat)
			least--;
		
		answer++;
		boat = 0;
	}

	return answer;
}