#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string solution(string s) 
{
	vector<long long>v;

	for (int i = 0; i < s.size(); i ++)
	{
		if (i != 0 && s[i] != ' ')
			continue;
		
		v.push_back(atoi(&s[i]));
	}

	sort(v.begin(), v.end());

	string answer;

	answer += to_string(v[0]);
	answer += ' ';
	answer += to_string(v.back());

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