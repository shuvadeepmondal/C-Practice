#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} node;

node *createlistdouble(int n)
{
    node *p, *q, *r;
    p = (node *)malloc(sizeof(node));
    scanf("%d", &(p->data));
    p->left = NULL;
    p->right = NULL;
    q = p;
    for (int j = 0; j < n - 1; j++)
    {
        r = (node *)malloc(sizeof(node));
        scanf("%d", &(r->data));
        r->right = NULL;
        r->left = q;
        q->right = r;
    }
    return p;
}

void traverse(node *p)
{
    node *t;
    t = p;
    while (p != NULL)
    {
        printf("%d ", t->data);
        t = t->right;
    }
}

int main(int argc, char const *argv[])
{
    node *head = createlistdouble(5);
    traverse(head);
return 0;
}
