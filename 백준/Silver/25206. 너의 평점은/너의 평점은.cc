#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	float total=0, amount = 0;
	map < string, float > m;
	m.insert({ "A+", 4.5 });
	m.insert({ "A0", 4.0 });
	m.insert({ "B+", 3.5 });
	m.insert({ "B0", 3.0 });
	m.insert({ "C+", 2.5 });
	m.insert({ "C0", 2.0 });
	m.insert({ "D+", 1.5 });
	m.insert({ "D0", 1.0 });
	m.insert({ "F", 0.0 });

	for (int i = 0; i < 20; i++)
	{
		float score = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> s;
			if (j == 1)
			{
				score += stof(s);
				amount += score;
			}
			else if (j == 2 && s != "P")
			{
				total += score * m[s];
			}
			else if (s == "P")
				amount -= score;
		}
	}

	/*float test;
	test = stof("3.0");
	cout << test * 2;*/

	cout << total / amount;

	return 0;
}