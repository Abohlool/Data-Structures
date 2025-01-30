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
    return 0;
}