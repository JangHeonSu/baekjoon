#include <iostream>
#include <algorithm>

using namespace std;
bool blank(int i, int j, int N);

void star(int N)
{
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (blank(i, j, N))
				cout << ' ';
			else
				cout << "*";
		}
		cout << '\n';
	}
}

bool blank(int i, int j, int N)
{
	if (N >= 1)
	{
		if ((i/N %3==1) && (j/N % 3 ==1))
			return true;
		else
			return blank(i, j, N / 3);
	}
	else
		return false;

}


int main() {

	int N;

	cin >> N;

	star(N);
    
    return 0;
}