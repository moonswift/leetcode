#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//获取前缀表
void getnext(int* next, char* s)
{
        int j = 0;
        next[0] = 0;
        for(int i = 1; i < strlen(s); ++i)
        {
                while(j > 0 && s[i] != s[j])
                {
                        j = next[j - 1];
                }
                if(s[i] == s[j])
                {
                        ++j;
                }
                next[i] = j;
        }
}
//函数返回值是int类型，题目要求返回指针地址
int my_strstr(char *str1, char *str2)
{
        if(strlen(str2) == 0)
                return 0;
        int next[strlen(str2)];
        getnext(next, str2);
        int j = 0;
        for(int i = 0; i < strlen(str1); ++i)
        {
                while(j > 0 && str1[i] != str2[j])
                        j = next[j - 1];
                if(str1[i] == str2[j])
                        ++j;
                if(j == strlen(str2))
                        return i - strlen(str2)  + 1;
        }
        return -1;
}
int main()
{
        char haystrck[10] = "aabaabaaf";
        char needle[7] = "aabaaf";
        printf("%d", my_strstr(haystrck, needle));
        return 0;
}