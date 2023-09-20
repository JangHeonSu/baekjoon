#include<string>
#include<stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
	bool answer = true;

	stack<char> st;
	
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ')')
		{
			if (st.empty())
			{
				st.push(s[i]);
				break;
			}
			st.pop();
		}
		else
			st.push(s[i]);
	}
    
    answer = st.empty();
	return answer;
}