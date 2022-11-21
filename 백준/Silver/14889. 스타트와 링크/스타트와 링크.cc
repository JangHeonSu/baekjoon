#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
vector<vector<int>> v;
vector<int> h;
vector<int> s;
int t[21];
bool b[21];
bool cal_p[21];
bool cal_o[21];
vector<int> calp;
vector<int> calo;
int p = 0;
int o = 0;
int Min=1111111111;

void com_p()
{
	p += v[calp[0]][calp[1]];
}

void com_o()
{
	o += v[calo[0]][calo[1]];
}

void cal_DFS_P(int k)
{
	if (k == 2)
	{
		com_p();
		return;
	}

	else 
	{
		for (int i = 0; i < h.size(); i++)
		{
			if (cal_p[i])
				continue;
			else 
			{
				cal_p[i] = true;
				calp.push_back(h[i]);
				cal_DFS_P(k + 1);
				calp.pop_back();
				cal_p[i] = false;
			}
		}
	}
}

void cal_DFS_O(int k)
{
	if (k == 2)
	{
		com_o();
		return;
	}

	else
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (cal_o[i])
				continue;
			else
			{
				cal_o[i] = true;
				calo.push_back(s[i]);
				cal_DFS_O(k + 1);
				calo.pop_back();
				cal_o[i] = false;
			}
		}
	}
}

void DFS(int N, int k, int c)
{
	if (k == N / 2)
	{
		for (int i = 0; i < N; i++)
		{
			if(!b[i])
			s.push_back(i);
		}
		cal_DFS_P(0);
		cal_DFS_O(0);
		if (Min > abs(p - o))
			Min = abs(p - o);
		p = 0;
		o = 0;
		for (int i = 0; i < k; i++)
			s.pop_back();
		return;
	}

	for (int i = c; i < N; i++)
	{
		if (b[i])
			continue;
		else
		{
			b[i] = true;
			h.push_back(i);
			DFS(N, k + 1,i);
			h.pop_back();
			b[i] = false;
		}
	}

}

int main()
{
	int N, a;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		t[i] = i;
	}

	for (int i = 0; i < N; i++)
	{
		vector<int> x;
		for (int j = 0; j < N; j++)
		{
			cin >> a;
			x.push_back(a);
		}
		v.push_back(x);
	}
	h.push_back(t[0]);
	b[0] = true;
	DFS(N, 1, 1);

	cout << Min;

	return 0;
}