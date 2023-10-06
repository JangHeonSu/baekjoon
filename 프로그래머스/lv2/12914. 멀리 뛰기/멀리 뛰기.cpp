#include <string>
#include <vector>

using namespace std;

long long solution(int n) 
{
	long long check,answer = 0;
	vector<vector<int>> pascal;

	check = n / 2;

	for (int i = 0; i <= n; i++)
	{
		vector<int> v;
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				v.push_back(1);
			else
				v.push_back(pascal[i - 1][j]%1234567 + pascal[i - 1][j - 1]%1234567);
		}
		pascal.push_back(v);
	}

	for (int i = 0; i <= check; i++)
	{
		answer += pascal[n - i][i];
	}
	answer %= 1234567;

	return answer;
}