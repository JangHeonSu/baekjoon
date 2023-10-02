#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
	int answer = 0;
	int A = a - 1, B = b - 1;
	while (A != B)
	{
		answer++;
		A /= 2;
		B /= 2;
	}

	return answer;
}