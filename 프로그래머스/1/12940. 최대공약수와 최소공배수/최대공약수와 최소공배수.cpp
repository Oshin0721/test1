#include <string>
#include <vector>

using namespace std;

int gcb(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcb(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int g = gcb(n, m);
    int l = lcm(n, m);
    answer.push_back(g);
    answer.push_back(l);
    return answer;
}