#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	while (1)	//무한루프임 탈출 조건 안에서 만들거임
	{
		cin >> n;
		if (n < 0)
			break;

		vector<int> v;
		int sum = 0;

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				v.push_back(i);
			}
		}

		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i];

				if ( i != v.size() - 1)
					cout << " + ";
			}
		}
		else
			cout << n << " is NOT perfect.";

		cout << '\n';
	}

	return 0;
}