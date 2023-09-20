#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string solution(string s) 
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
			s[i + 1] = toupper(s[i + 1]);
	}
	s[0] = toupper(s[0]);

	string answer = "";

	answer = s;
	return answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);

	cout << solution(s);
	
	return 0;
}