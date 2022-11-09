#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

//struct hs {
//	int age=0;
//	string name="\n";
//}x;

bool comp(pair<int, string> i, pair<int, string> j)
{
	return i.first < j.first;
}

int main() {

	int N;
	cin >> N;
	pair<int, string> tmp;
    vector<pair<int,string>> v;
	for (int i=0;i<N;i++)
	{
		cin >> tmp.first >> tmp.second;
		v.push_back(tmp);
	}

	stable_sort(v.begin(), v.end(),comp);

	for (int i = 0; i < N; i++)
	{
		cout << v[i].first << " " << v[i].second << '\n';
	}

	return 0;
}