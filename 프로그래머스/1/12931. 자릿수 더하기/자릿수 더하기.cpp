#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while (n > 0) {
        answer += n % 10;
        n /= 10;
    }
    cout << "각 자리수의 합" << endl;

    return answer;
}