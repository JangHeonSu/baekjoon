#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string>v;
	string s;
	int max = 0;


	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		v.push_back(s);
		if (max < s.size())
			max = s.size();
	}
	
	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= v[j].size())
				continue;
			cout << v[j][i];
		}
	}

	return 0;
}