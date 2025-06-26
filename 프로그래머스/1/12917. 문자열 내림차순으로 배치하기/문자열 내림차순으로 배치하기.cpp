#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = s;
    
    for (size_t i = 0; i < answer.length(); ++i)
    {
        for (size_t j = 0; j < answer.length() - 1 - i; ++j)
             {
                 if (answer[j] < answer[j + 1])
                 {
                     char temp = answer[j];
                     answer[j] = answer[j + 1];
                     answer[j + 1] = temp;
                 }
             }
    }
    return answer;
}