#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
{
	int temp;

	if (b > a)
	{
		temp = b;
		b = a;
		a = temp;
	}

	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int LCM(int a, int b)
{
	return (a * b) / GCD(a, b);
}

int solution(vector<int> arr)
{
	int answer = 1;

	for (int i = 0; i < arr.size(); i++)
	{
		answer = LCM(arr[i], answer);
	}

	return answer;
}