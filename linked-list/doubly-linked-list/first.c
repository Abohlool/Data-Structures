#include <stdio.h>
#include <stdlib.h>

// node data structure
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

int main(void)
{
    node *list = NULL;
    list->prev = NULL;

    for (int i = 0;i < 5;i++)
    {
        node *n = list;
        if (n == NULL) {return 1;}
        scanf("%i", n->data);
        n->prev = list;
        n->next = NULL;
    }
    
    return 0;
}