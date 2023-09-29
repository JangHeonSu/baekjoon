#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
	int temp,sum = brown + yellow;
	vector<int> answer;
	temp = sum - 1;

	while (1)
	{
		if (temp != 0 && sum % temp == 0 && sum / temp != 2)
			if (2*(temp + sum / temp) - 4 == brown)
			{
				answer.push_back(temp);
				answer.push_back(sum / temp);
				break;
			}
		temp--;
	}

	return answer;
}