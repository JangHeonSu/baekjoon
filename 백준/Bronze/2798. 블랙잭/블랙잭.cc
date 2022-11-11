#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N, M , a,max=0;
	cin >> N >> M;
	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < N-2; i++) 
	{
		for (int j = i+1; j < N-1; j++) 
		{
			for (int k = j+1; k < N; k++) 
			{
				if (v[i] + v[j] + v[k] > M)
					continue;
				else if (v[i] + v[j] + v[k] == M)
				{
					cout << M;
					return 0;
				}
				else
				{
					if (max < v[i] + v[j] + v[k])
						max = v[i] + v[j] + v[k];
				}
			}
		}
		if (i == N - 3)
			cout << max;
	}
	return 0;
}