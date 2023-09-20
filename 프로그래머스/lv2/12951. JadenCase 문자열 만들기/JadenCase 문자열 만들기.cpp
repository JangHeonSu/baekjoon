#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string solution(string s) 
{
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i - 1] == ' ')
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);
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