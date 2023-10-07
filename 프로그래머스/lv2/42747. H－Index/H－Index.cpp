#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations)
{
	int answer = 0, size = citations.size();
	sort(citations.begin(), citations.end());
	int h = citations[size-1];
	for (int i = size-1; i >= 0; i--)
	{
		int lower;	
		lower = lower_bound(citations.begin(), citations.end(), h) - citations.begin();
		if (size - lower >= h)
		{
			answer = h;
			break;
		}
		h--;
	}

	return answer;
}