#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int Max = -1111111111;
int Min = 1111111111;
int result = 0;
int com_check[4] = { 0 };
int com[4] = { 0 };
bool com_bool[4];
vector<int> v;
int* a = new int;

int cal(int a[],int n)
{
	result = a[0];
	for (int i = 0; i < n-1; i++)
	{
		if (v[i] == 0)
			result += a[i + 1];
		else if (v[i] == 1)
			result -= a[i + 1];
		else if (v[i] == 2)
			result *= a[i + 1];
		else if (v[i] == 3)
			result /= a[i + 1];
	}

	return result;
}

void DFS(int a[], int n, int k)
{
	if (k == n - 1)
	{
		result = cal(a,n);

		if (Max < result)
			Max = result;

		if (Min > result)
			Min = result;

		result = 0;
		return;
	}

	for (int i = 0; i<4 ;i++)
	{
		if (com_bool[i])
			continue;
		else if (com[i] != 0)
		{
			com_check[i]++;
			if (com_check[i] == com[i])
				com_bool[i] = true;
			v.push_back(i);
			DFS(a, n, k+1);
			com_bool[i] = false;
			com_check[i]--;
			v.pop_back();
		}
		else
			continue;
	}

}

int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> com[i];
	}

	DFS(a, N, 0);

	cout << Max << '\n' << Min;

	return 0;
}