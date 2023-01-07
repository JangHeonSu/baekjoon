#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,a,err=-1;
	string str;
	cin >> N;
	queue<int>q;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> a;
			q.push(a);
		}
		else if (str == "pop")
		{
			if (q.empty())
				cout << err << '\n';
			else 
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size")
		{
			cout << q.size() << '\n';
		}
		else if (str == "empty")
		{
			cout << q.empty() << '\n';
		}
		else if (str == "front")
		{
			if (q.empty())
				cout << err << '\n';
			else
			{
				cout << q.front() << '\n';
			}
		}
		else if (str == "back")
		{
			if (q.empty())
				cout << err << '\n';
			else
			{
				cout << q.back() << '\n';
			}
		}
	}

	return 0;
}