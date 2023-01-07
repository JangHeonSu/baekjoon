#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int>v,t;
	int N,a,max=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	t.push_back(v[0]);
	t.push_back(v[v.size() - 1]);
	for (int i = 1; i < v.size()-1; i++)
	{
		a =  v[i - 1] > v[i + 1] ? v[i + 1] : v[i - 1];
		a += v[i];
		t.push_back(a);
	}
	sort(t.begin(), t.end());

	cout << t[t.size() - 1];
	return 0;
}