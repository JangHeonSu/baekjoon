#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue<int> q;

int main() {
	int n,N;
	cin >> N;
	
	for(int i=1; i<=N; i++)
	{
		q.push(i);
	}

	while (q.size() != 1)
	{
		q.pop();
		n = q.front();
		q.pop();
		q.push(n);
	}

	cout << q.front()<<endl;

}