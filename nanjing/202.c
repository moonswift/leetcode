#include <stdio.h>
#include <string.h>
void getnext(char* next, char* s)
{
        int j = 0;
        next[0] = 0;
        for(int i = 1; i < sizeof(s); ++i)
        {
                while(j > 0 && s[i] != s[j])
                {
                        j = next[i - 1];
                }
                if(s[i] == s[j]
                {
                        ++j;
                }
                next[i] = j;
        }
}
char *my_strstr(char *str1, char *str2)
{
         
}
int main()
{

}