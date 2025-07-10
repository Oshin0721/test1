#include <string>
#include <vector>

using namespace std;

int solution (vector<vector<int>> sizes)
{
    int maxWidth = 0; //가장 긴 가로
    int maxHeight = 0; //가장 긴 세로
    
    for (vector<int> card : sizes)
    {
        int w, h;
        
        if (card[0] > card[1])
        {
            w = card[0];
            h = card[1];
        }
        else
        {
            w = card[1];
            h = card[0];
        }
        
        if (w > maxWidth)
        {
            maxWidth = w ;
        }
        
        if (h > maxHeight)
        {
            maxHeight = h;
        }
    }
    
    return maxWidth * maxHeight;
}