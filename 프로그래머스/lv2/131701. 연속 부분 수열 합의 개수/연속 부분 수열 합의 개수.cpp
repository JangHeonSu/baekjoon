#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> elements)
{
	int answer = 0;
	map<int, int> m;

	for (int i = 1; i<=elements.size(); i++)
	{
		int pointer = 0;
		//길이가 i인 경우
		while (pointer!=elements.size())
		{
			int sum = 0;
			for (int j = 0; j < i; j++)
			{
				sum += elements[(pointer + j)%elements.size()];
			}
			m[sum]++;
			pointer++;

			if (i == elements.size())
				break;
		}
	}
	answer = m.size();
	return answer;
}