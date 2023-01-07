#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int stackqueue[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N, a, temp;
	cin >> N;
	queue<int>q;
	stack<int>s;
	for (int i = 0; i < N; i++)
	{
		cin >> stackqueue[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (stackqueue[i] == 0)
		{
			s.push(a);
		}
	}

	while(!s.empty())
	{	
		q.push(s.top());
		s.pop();
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> a;

		q.push(a);
		
		cout << q.front() << ' ';
		q.pop();
	}

	return 0;
}