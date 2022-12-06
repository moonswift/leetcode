#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * removeDuplicates(char * s){
    //求出字符串长度
    int strLength = strlen(s);
    //开辟栈空间。栈空间长度应为字符串长度+1（为了存放字符串结束标志'\0'）
    char* stack = (char*)malloc(sizeof(char) * strLength + 1);
    int stackTop = 0;

    int index = 0;
    //遍历整个字符串
    while(index < strLength) {
        //取出当前index对应字母，之后index+1
        char letter = s[index++];
        //若栈中有元素，且栈顶字母等于当前字母（两字母相邻）。将栈顶元素弹出
        if(stackTop > 0 && letter == stack[stackTop - 1])
            stackTop--;
        //否则将字母入栈
        else
            stack[stackTop++] = letter;
    }
    //存放字符串结束标志'\0'
    stack[stackTop] = '\0';
    //返回栈本身作为字符串
    return stack;
}
int main()
{
    int nums[10] = {0};
    int data[10][10] = {0};
    int count[10] = {0};
    memset(count, 0, sizeof(count));
    memset(data, 0, sizeof(data));
    printf("随机生成未排序:  ");
    for(int i = 0; i < 10 ; ++i)
    {
        nums[i] = rand() % 100 + 1;
        printf("%d\t", nums[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; ++i)
    {
        int k = nums[i] % 10;
        data[k][count[k]] = nums[i];
        count[k]++;
    }
    printf("count数组:  ");
    for(int i = 0; i < 10; ++i)
    {
        printf("%d\t", count[i]);
    }
    printf("\n");
    int i = 0;
    int p = 0;
    //printf("按个位排序: ");
    while(i < 10)
    {
        for(int j = 0; j < count[i]; ++j)
        {
            if(data[i][j] != 0)
            {
                nums[p] = data[i][j];
                p++;
            }
        }
        i++;
    }
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 10; ++i)
    {
        printf("%d \t", nums[i]);
    }
    int a = 66;
    printf("%c", (a)&(a-1)?'n':'y');
    return 0;
}