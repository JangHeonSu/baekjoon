#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int res = 0;
    string s;
    vector<string> v;
    cin >> s;


   for (int i = 0; i < s.length(); i++)
    {
       string h;
       for (int j = i; j < s.length(); j++)
       {
          h += s[j];
          v.push_back(h);
       }
    }

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size();

    return 0;
}