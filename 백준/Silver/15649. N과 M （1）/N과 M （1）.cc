#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int* t = new int;
bool* o = new bool;
vector<int> c;
void print()
{
	for (int i = 0; i < c.size(); i++)
	{
		cout << c[i] << " ";
	}
	cout << '\n';
}

void DFS(int a, int n, int m)
{
	if (a == m)
	{
		print();
		return;
	}
	
	for (int i = 0; i < n; i++)
	{
		if (o[i] == true)
			continue;
		o[i] = true;
		c.push_back(t[i]);
		DFS(a + 1,n,m);
		c.pop_back();
		o[i] = false;
	}
}

int main() {

	int N, M;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		t[i-1] = i;
	}

	DFS(0,N,M);

	return 0;
}