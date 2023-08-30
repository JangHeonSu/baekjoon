#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void swap(int i, int j)
{
	vector<int> res;
	res = v;
	int temp, o = j;

	for (int k = i - 1; k <= (i + j) / 2 - 1; k++)
	{
		temp = res[o - 1];
		res[o - 1] = res[k];
		res[k] = temp;
		o--;
	}

	v = res;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M , a, b;

	cin >> N >> M;
	

	for (int i = 1; i <= N; i++)
	{
		v.push_back(i);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		swap(a, b);
	}
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i]<<' ';
	}

	return 0;
}