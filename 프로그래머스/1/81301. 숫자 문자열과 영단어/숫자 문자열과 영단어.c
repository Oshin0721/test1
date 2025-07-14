#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) 
{
    const char* words[] =
    {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    
    char buffer[100] = {0};
    int idx = 0;
    
    for (int i = 0; s[i] != '\0';)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            buffer[idx++] = s[i++];
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                int len = strlen(words[j]);
                if (strncmp(&s[i], words[j], len) == 0)
                {
                    buffer[idx++] = '0' + j;
                    i += len;
                    break;
                }
            }
        }
    }
    
    return atoi(buffer);
}