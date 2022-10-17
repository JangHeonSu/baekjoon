#include <cstdio>

int main()
{
	int N[26];
	char S[101] = { 0 };
	scanf("%s", S);

	for (int i = 0; i < 26; i++)
	{
		N[i] = -1;
	}

	for (int i = 0; i < 101; i++)
	{
		if(N[S[i] - 97]==-1)
		N[S[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", N[i]);
	}

	return 0;
}
