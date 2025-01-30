#include <stdio.h>
#include <stdlib.h>

// Node Structure
typedef struct node
{
    int data;
    struct node *next;
} node;

node *newNode(int data);
void printList(node *first);

int main(int argc, char *argv[])
{
    node *list = NULL;
    for (int i = 1;i < argc;i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL) {return 1;}

        n = newNode(atoi(argv[i]));
    }
    printList(list);

    return 0;
}

node *newNode(int data)
{
    node *n = malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
    return n;
}

void printList(node *first)
{
    node *ptr = first;
    while (ptr != NULL)
    {
        printf("%i, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}