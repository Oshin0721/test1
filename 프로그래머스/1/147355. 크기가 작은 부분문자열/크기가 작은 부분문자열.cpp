#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    int plen = p.length();
    long long pNum = stoll(p);
    
    for (int i = 0; i <= t.length() - plen; ++i)
    {
        string sub = t.substr(i, plen);
        long long num =stoll(sub);
        if (num <= pNum) answer++;
    }
        
    return answer;
}