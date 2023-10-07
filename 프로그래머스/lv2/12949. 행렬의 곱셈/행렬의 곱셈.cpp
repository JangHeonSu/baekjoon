#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	vector<vector<int>> answer;

	for (int i = 0; i < arr1.size(); i++)
	{
		int k = 0;
		vector<int>v;
		while(k<arr2[0].size())
		{
			int sum = 0;
			for (int j = 0; j < arr2.size(); j++)
			{
				sum += arr1[i][j] * arr2[j][k];
			}
			k++;
			v.push_back(sum);
		}
		answer.push_back(v);
	}
	return answer;
}