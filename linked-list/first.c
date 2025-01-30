#include <stdio.h>
#include <stdlib.h>

// Node Data Structure
typedef struct node
{
    int data;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    // the first node
    node *list = malloc(sizeof(node));

    list->data = 10;
    list->next = NULL;

    node *n = list;
    while (n != NULL)
    {
        printf("%i\n", n->data);
        n = n->next;
    }

    return 0;
}