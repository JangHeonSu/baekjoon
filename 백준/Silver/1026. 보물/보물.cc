#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int a,N;
	cin >> N;
	vector<int> A;
	vector<int> B;
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		A.push_back(a);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		B.push_back(a);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(),comp);

	for (int i = 0; i < N; i++)
	{
		a = A[i] * B[i];
		result += a;
	}
	cout << result;

	return 0;
}