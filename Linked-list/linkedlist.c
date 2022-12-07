#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

LNode * creat_linkedlist(int * arc, int length) {
    int i;
    //创建头结点 H，其链表的头指针也是 H
    LNode* H = (LNode*)malloc(sizeof(LNode));
    H->val = arc[0];
    H->next = NULL;
    //设置一个指针，在遍历链表时用
    LNode * temp = H;
    //采用尾插法创建链表
    for (i = 1; i<length; i++) {
        //创建新结点并对其进行初始化
        LNode * a = (LNode*)malloc(sizeof(LNode));
        a->val = arc[i];
        temp->next = a;
        temp = temp->next;
/*         a->next = NULL;
        //将新结点链接到链表的表尾
        temp->next = a;
        //循环过程中，temp始终指向链表表尾的结点
        temp = temp->next; */
    }
    temp->next = NULL;
    return H;
}
void display(LNode *p) {
    while (p) {
        printf("val : %d ", p->val);
        p = p->next;
    }
    printf("\n");
}