#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (char c : s)
    {
        if (c == ' ')
        {
            answer += c;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            answer += (c - 'A' + n) % 26 + 'A';
        }
        else if (c>= 'a' && c <= 'z')
        {
            answer += (c - 'a' + n) % 26 +'a';
        }
    }
    
    return answer;
}