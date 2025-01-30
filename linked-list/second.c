#include <stdio.h>
#include <stdlib.h>

// node structure
typedef struct node
{
    int data;
    struct node *next;
} node;


int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1;i < argc;i++)
    {
        node *n = malloc(sizeof(node));
        int number = atoi(argv[i]);

        if (n == NULL) {return 1;}

        n->data = number;
        n->next = list;
        list = n;
    }

    // Printing the whole list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}