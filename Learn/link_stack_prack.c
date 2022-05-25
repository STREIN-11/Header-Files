#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void print(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements are : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int empty(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct Node *ptr)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *q, int val)
{
    if (full(q))
    {
        printf("Stack is Over Flow");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = val;
        n->next = q;
        q = n;
        return q;
    }
}

int pop(struct Node *ptr)
{
    if (empty(ptr))
    {
        printf("Stack Has No Elements");
    }
    else
    {
        struct Node *h = ptr;
        top = ptr->next;
        int x = h->data;
        free(h);
    }
}

int peak(int pos){
    struct Node *ptr = top;
    for (int i = 0; (i<pos-1 && ptr!=NULL); i++)
    {
        ptr=ptr->next;
    }
    if (ptr == NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
    
    
}

int main()
{
    while (1)
    {
        int input, n, m,p;
        printf("1.Push, 2.PoP, 3.Peak : ");
        scanf("%d", &input);
        if (input == 1)
        {
            // struct Node *top = NULL;
            printf("How Much input : ");
            scanf("%d", &m);
            for (int i = 0; i <= m; i++)
            {
                printf("Enter Your Number : ");
                scanf("%d", &n);
                top = push(top, n);
            }
            pop(top);
            print(top);
        }
        else if (input == 3)
        {
            printf("Enter Value You want to show : ");
            scanf("%d",&p);
            peak(p);
        }
        
        else
            printf("No Module");
    }
    return 0;
}