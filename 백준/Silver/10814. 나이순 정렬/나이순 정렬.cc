#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct hs {
	int age=0;
	int index=0;
	string name="\n";
};

bool comp(hs i, hs j)
{
	if (i.age < j.age)
		return true;
	else if (i.age == j.age)
	{
		return i.index < j.index;
	}
	else
		return false;
}

vector<hs> v;

int main() {

	int N;
	hs x;
	cin >> N;

	for (int i=0;i<N;i++)
	{
		cin >> x.age;
		cin >> x.name;
		x.index = i;
		v.push_back(x);
	}

	sort(v.begin(), v.end(),comp);

	for (int i = 0; i < N; i++)
	{
		cout << v[i].age << " " << v[i].name << '\n';
	}

	return 0;
}
