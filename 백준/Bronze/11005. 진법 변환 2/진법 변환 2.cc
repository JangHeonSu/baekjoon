#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int B, req, temp, val=0;
	string res;

	cin >> req >> B;
	temp = req;

	while (temp>=B)
	{
		val = temp % B;
		temp = temp / B;

		if (val < 10)
			res.push_back(val+'0');
		else if (val != 0)
			res.push_back('A' - 10 + val);
	}
	if (temp < B)
	{
		if (temp < 10)
			res.push_back(temp + '0');
		else if (temp != 0)
			res.push_back('A' - 10 + temp);
	}
	reverse(res.begin(), res.end());

	cout << res;

	return 0;
}