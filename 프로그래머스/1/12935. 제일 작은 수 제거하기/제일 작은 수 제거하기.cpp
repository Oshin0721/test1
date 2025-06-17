#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    int a = arr[0];
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] < a)
        {
            a = arr[i];
        }
    }
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if(arr[i] != a)
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}