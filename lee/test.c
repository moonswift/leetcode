#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define B P, P, P, P, P, P, P, P, P, P
#define P L, L, L, L, L
#define L I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, N
#define I printf("%5d", i++)
#define N printf("\n")
typedef struct Link {
    int  elem;
    struct Link *next;
}link;
//无头结点链表的尾插法实现函数
link * creatLink(int * arc, int length) {
    int i;
    //最初状态下，头指针 H 没有任何结点，所以，插入第一个元素，就相当于是创建结点 H
    link * H =(link*)malloc(sizeof(link));
    H->elem = arc[0];
    H->next = NULL;

    link * temp=H;
    //如果采用尾插法插入超过 1 个元素，则需添加到链表表尾
    for (i = 1; i<length; i++) {
        //创建新结点并对其进行初始化
        link * a = (link*)malloc(sizeof(link));
        a->elem = arc[i];
        a->next = NULL;
        //将新结点添加到链表的尾部
        temp->next = a;
        //循环过程中，temp时刻指向链表中的最后一个结点
        temp = temp->next;
    }
    return H;
}
//有头结点链表的尾插法实现函数
link * HcreatLink(int * arc, int length) {
    int i;
    //创建头结点 H，其链表的头指针也是 H
    link * H = (link*)malloc(sizeof(link));
    H->elem = 0;
    H->next = NULL;
    //设置一个指针，在遍历链表时用
    link * temp = H;
    //采用尾插法创建链表
    for (i = 0; i<length; i++) {
        //创建新结点并对其进行初始化
        link * a = (link*)malloc(sizeof(link));
        a->elem = arc[i];
        a->next = NULL;
        //将新结点链接到链表的表尾
        temp->next = a;
        //循环过程中，temp始终指向链表表尾的结点
        temp = temp->next;
    }
    return H;
}
//链表的输出函数
void display(link *p) {
    while (p) {
        printf("%d ", p->elem);
        p = p->next;
    }
    printf("\n");
}
int main() {
    int a[4] = { 1,2,3,4};
    //采用尾插法创建无头结点链表
    link * H = creatLink(a, 4);
    display(H);
    //采用尾插法创建有头结点链表
    link * head = HcreatLink(a, 4);
    display(head);
    //使用完毕后，释放即可
    free(H);
    free(head);
    link * head1 = (link*)malloc(sizeof(link));
    head->elem = 22;
    link * p = (link*)malloc(sizeof(link));
    p = head1;
    printf("head address: %p\n", head1);
    printf("p address: %p\n", p);
    printf("%d", p->elem);

    free(head); 
    return 0;
}