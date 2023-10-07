#include <string>
#include <vector>
#include <stack>

using namespace std;

bool check(string s)
{
	stack<char>stk;

	for (int i = 0; i < s.size(); i++)
	{
		if (stk.empty())
			stk.push(s[i]);
		else
		{
			if (s[i] == stk.top() + 1|| s[i]==stk.top()+2)
				stk.pop();
			else
				stk.push(s[i]);
		}
	}
	return stk.empty();
}

int solution(string s)
{
	int answer = 0, size = s.size();
	for (int i = 0; i < size; i++)
	{
		if (s[i] == ')' || s[i] == ']' || s[i] == '}')
			continue;

		string temp;
		for (int j = 0; j < size; j++)
		{
			temp += s[(i + j) % size];
		}
		answer += check(temp);
	}
	
	return answer;
}