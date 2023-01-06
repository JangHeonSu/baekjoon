#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int>v1, v2;

	int A,B,n,res=0;

	cin >> A >> B;

	for (int i = 0; i < A; i++)
	{
		cin >> n;
		v1.push_back(n);
	}

	for (int i = 0; i < B; i++)
	{
		cin >> n;
		v2.push_back(n);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = 0; i<v2.size(); i++)
	{
		if (binary_search(v1.begin(), v1.end(), v2[i]) == 0)
			res++;
	}
	
	for (int i = 0; i<v1.size(); i++)
	{
		if (binary_search(v2.begin(), v2.end(), v1[i]) == 0)
			res++;
	}

	cout << res;

	return 0;
}