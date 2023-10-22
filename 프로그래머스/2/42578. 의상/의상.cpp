#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    int answer = 1;
    map<string, int> m;

    for (int i = 0; i < clothes.size(); i++)
    {
        m[clothes[i][1]]++;
    }

    for (int i = 0; i < clothes.size(); i++)
    {
        if (m[clothes[i][1]] == 0)
            continue;
        answer *= (m[clothes[i][1]]+1);
        m[clothes[i][1]] = 0;
    }
    answer--;

    return answer;
}