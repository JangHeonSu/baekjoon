#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a;
    vector<int>v;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    int front, end;

    sort(v.begin(), v.end());

    front = 0;
    end = v[v.size() - 1];

    int mid = (front + end)/2;
    long long int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (front + 1 == end)
            break;

        if (v[i] - mid > 0)
        {
            sum += v[i] - mid;
        }
        else
        {
            continue;
        }

        if (sum >= M)
        {
            front = mid;
            mid = (front + end) / 2;
            sum = 0;
            i = -1;
        }
        else
        {
            if (i != v.size() - 1)
                continue;

            end = mid;
            mid = (front + end) / 2;
            sum = 0;
            i = -1;
        }
    }

    cout << mid;
    return 0;
}