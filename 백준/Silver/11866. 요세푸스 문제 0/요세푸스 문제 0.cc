#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, k, Count = 0, jang = 0, sum = 0, f = 0;
	vector<int> v;
	cin >> N >> k;

	for (int i = 0; i <N; i++)
	{
		v.push_back(i+1);
		sum += (i + 1);
	}

	cout << '<';

	int t = 0;
	while(1)
	{
		if (jang == N - 1)
		{
			cout << sum - f << '>';
			break;
		}

		if (v[t%N] != 0)
			Count++;
		else
		{
			t++;
			continue;
		}
		if (Count% k==0)
		{
			cout << v[t % N] << ',' << ' ';
			f += v[t % N];
			v[t % N] = 0;
			jang++;
		}
		t++;
	}

	return 0;
}