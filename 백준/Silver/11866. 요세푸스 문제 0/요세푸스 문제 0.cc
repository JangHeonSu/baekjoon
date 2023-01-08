#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int>q;
	int N, k;
	cin >> N >> k;

	for (int i = 0; i <N; i++)
	{
		q.push(i + 1);
	}

	cout << '<';
	while (1)
	{
		if (q.size() == 1)
			break;
		else
		{
			for (int i = 0; i < k-1;i++)
			{
				q.push(q.front());
				q.pop();
			}
			cout << q.front() << ',' << ' ';
			q.pop();
		}
	}

	cout << q.front() << '>';

	return 0;
}