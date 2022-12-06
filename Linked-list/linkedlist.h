#ifndef __LINKEDLIST_H   //如果没有定义__TEST_H，那么定义它 
#define __LINKEDLIST_H

typedef struct ListNode
{
    int val;
    struct ListNode* next;
}LNode;        

LNode* creat_linkedlist(int * arc, int length);
void display(LNode *p);
#endif