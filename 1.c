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
    char result[] = "abbaca";
    char* s = (char*)malloc(sizeof(char) * strlen(result) + 1);
    s = removeDuplicates(result);
    return 0;
}