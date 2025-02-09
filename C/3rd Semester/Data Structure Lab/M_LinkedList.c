#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    struct node *s = NULL;
    struct node *t = NULL;
    struct node *u = NULL;
    struct node *v = NULL;

    s = (struct node *)malloc(sizeof(struct node));
    t = (struct node *)malloc(sizeof(struct node));
    u = (struct node *)malloc(sizeof(struct node));
    v = (struct node *)malloc(sizeof(struct node));

    s->data = a;
    t->data = b;
    u->data = c;
    v->data = d;

    s->next = t;
    t->next = u;
    u->next = v;
    v->next = NULL;

    struct node *temp = s;
    printf("Print the linked list\n");

    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }

    return 0;
}