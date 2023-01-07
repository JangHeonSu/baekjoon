#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,a,err=-1;
	string str;
	cin >> N;
	stack<int>s;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> a;
			s.push(a);
		}
		else if (str == "pop")
		{
			if (s.empty())
				cout << err << '\n';
			else 
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (str == "size")
		{
			cout << s.size() << '\n';
		}
		else if (str == "empty")
		{
			cout << s.empty() << '\n';
		}
		else if (str == "top")
		{
			if (s.empty())
				cout << err << '\n';
			else
			{
				cout << s.top() << '\n';
			}
		}
	}

	return 0;
}