#include <string>
#include <vector>

using namespace std;

int countDivis(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if (i * i == n)
        {
            count += 1;
        }
        else if (n % 1 == 0)
        {
            count += 2;
        }
    }
    return count;
}

int solution(int left, int right) {
    int answer = 0;
    for (int i = left ; i <= right; ++i)
    {
        int c = countDivis(i);
        if (c % 2 == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    return answer;
}