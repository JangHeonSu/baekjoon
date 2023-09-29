#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) 
{
	vector<int> answer;
	map<string, int>m;

	for (int i = 1; i < words.size(); i++)
	{
		if (words[i-1].back() == words[i].front())
		{
			if (m[words[i]])
			{
				answer.push_back(i % n + 1);
				answer.push_back(i / n + 1);

				return answer;
			}
			else
				m[words[i-1]] = 1;
		}
		else
		{
			answer.push_back(i % n + 1);
			answer.push_back(i / n + 1);

			return answer;
		}
	}
	
	answer.push_back(0);
	answer.push_back(0);

	return answer;
}