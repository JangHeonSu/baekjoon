#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
bool b[13];

void print()
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << '\n';
}

void lotto(vector<int> s, int k, int h, int t)
{
	if (h == 6)
	{
		print();
		return;
	}

	for (int i = t; i < k; i++)
	{
		if (b[i])
			continue;
		else
		{
			b[i] = true;
			v.push_back(s[i]);
			lotto(s, k, h + 1, i);
			v.pop_back();
			b[i] = false;
		}
	}
}

int main() {

	int k = 1, a;

	while (k != 0)
	{
		cin >> k;
		if (k == 0)
			break;
		vector<int> s;

		for (int i = 0; i < k; i++)
		{
			cin >> a;
			s.push_back(a);
		}

		lotto(s, k, 0, 0);
		cout << "\n";
	}

	return 0;
}