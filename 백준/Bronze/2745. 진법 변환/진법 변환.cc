#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int B,res=0, k=1;
	string N;

	cin >> N >> B;

	for (int i = N.size()-1; i >=0 ; i--)
	{
		if (N[i] >= 'A' && N[i] <= 'Z')
			res += (N[i] - 'A' + 10) * k;
		else
			res += (N[i]-'0') * k;
		k *= B;
	}

	cout << res;

	return 0;
}