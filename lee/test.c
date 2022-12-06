#include <stdio.h>
#include <stdlib.h>
#define B P, P, P, P, P, P, P, P, P, P
#define P L, L, L, L, L
#define L I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, I, N
#define I printf("%5d", i++)
#define N printf("\n")
#define A  \
    (x) x; \
    x;     \
    x;     \
    x;     \
    x;     \
    x;     \
    x;     \
    x;     \
    x;
typedef struct ListNode
{
    /* data */
    int val;
    struct ListNode *next;

} LNote;
/*struct ListNode* remove(struct ListNode* head) //删除链表未排序元素
{
    int index[20001] = {0};
    if(head == NULL) return head;
    struct ListNode*slow = head, *quick = head;
    while(quick)
    {
        if(index[quick->val] == 0)
        {
            index[quick->val] = 1;
            slow = quick;
            quick = quick->next;
        }else{
            quick = quick->next;
            slow->next = quick;
        }
    }
    return head;

}*/

struct ListNode *remove1(struct ListNode *head) //删除链表未排序元素
{
    if (head == NULL)
        return NULL;
    struct ListNode *cur = head;
    while (cur)
    {
        struct ListNode *p = cur;
        while (p->next)
        {
            if (p->next->val == cur->val)
                p->next = p->next->next;
            else
                p = p->next;
        }
        cur = cur->next;
    }
    return head;
}

int main()
{
    
    return 0;
}
