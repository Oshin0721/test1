#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
    vector<int> ternary;
    
    while (n > 0)
    {
        ternary.push_back(n % 3);
        n /= 3;
    }
    
    int answer = 0;
    int power = 1;
    
    for (int i = ternary.size() - 1; i >= 0; i--)
    {
        answer += ternary[i] * power;
        power *= 3;
    }
    
    return answer;
}