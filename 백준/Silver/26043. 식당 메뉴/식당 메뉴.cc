#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> A,B,C;

	int n,a,x,y;
	cin >> n;
	queue<pair<int, int>>q;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1)
		{
			cin >> x >> y;
			q.push({x, y});
		}
		
		else
		{
			cin >> x;
			if (q.front().second == x)
				A.push_back(q.front().first);
			else
				B.push_back(q.front().first);

			q.pop();
		}
	}
	if (A.size() == 0)
		cout << "None" << '\n';
	else 
	{
		sort(A.begin(), A.end());

		for (int i = 0; i < A.size(); i++)
		{
			cout << A[i] << ' ';
		}
		cout << '\n';
	}

	if (B.size() == 0)
		cout << "None" << '\n';
	else
	{
		sort(B.begin(), B.end());

		for (int i = 0; i < B.size(); i++)
		{
			cout << B[i] << ' ';
		}
		cout << '\n';
	}

	if (q.size() == 0)
		cout << "None" << '\n';
	else
	{
		while (q.size() > 0)
		{
			C.push_back(q.front().first);
			q.pop();
		}

		sort(C.begin(), C.end());

		for (int i = 0; i < C.size(); i++)
		{
			cout << C[i] << ' ';
		}
	}

	return 0;
}