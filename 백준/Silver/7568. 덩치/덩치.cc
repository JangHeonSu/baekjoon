#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct MyStruct
{
	int weight;
	int height;
	int rank;
};

vector<MyStruct> v;

int main() {

	int N,x,y;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		v.push_back({ x, y, 0 });
	}

	for (int i = 0; i < N; i++)
	{
		int count = 1;
		for (int j = 0; j < N; j++)
		{
			if (v[i].height<v[j].height && v[i].weight<v[j].weight)
			{
				count++;
			}
			v[i].rank = count;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << v[i].rank << " ";
	}

	return 0;
}