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