#include <string>


using namespace std;

string solution(string s) {
    string answer = "";
    
    int l = s.length();
    int a = l / 2 ;
    
    if (l % 2 == 0)
    {
        answer = s.substr(a - 1, 2);
    } 
    else
    {
      answer = s.substr(a, 1);  
    }
    
    return answer;
}