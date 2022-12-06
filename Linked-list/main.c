#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedlist.h"
int main()
{
    int a[6] = {1, 1, 2, 1, 6, 9};
    LNode* test = creat_linkedlist(a, 6);
    display(test);
    free(test);
    return 0;
}