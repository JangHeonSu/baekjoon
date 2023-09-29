#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
	int answer = 0;

	for (int i = 1; i * (i + 1) <= 2 * n; i++)
	{
		if (i % 2 == 1)
		{
			if (n % i == 0)
				answer++;
			continue;
		}
		else
		{
			if((n%i)*2 == i)
				answer++;
			continue;
		}
	}

	return answer;
}