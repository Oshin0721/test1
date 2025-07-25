#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;
    
    for (auto cmd : commands)
    {
        int i = cmd[0] - 1;
        int j = cmd[1];
        int k = cmd[2] - 1;
        
        vector<int> temp(array.begin() + i, array.begin() + j);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k]);
    }
    return answer;
}