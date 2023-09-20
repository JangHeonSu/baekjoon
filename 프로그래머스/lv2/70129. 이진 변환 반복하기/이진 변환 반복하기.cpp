#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int amount=0, exe=0;
vector<int> solution(string s) 
{
    vector<int> answer;
    exe++;
    string x, next;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            amount++;
        else
            x += s[i];
    }
    answer.push_back(exe);
    answer.push_back(amount);

    if (x.size() == 1)
        return answer;
    else
    {
        int temp = x.size();

        while (temp >= 1)
        {
            if (temp % 2)
                next += '1';
            else
                next += '0';

            temp /= 2;
        }
        reverse(next.begin(), next.end());
        answer = solution(next);
    }
    return answer;
}