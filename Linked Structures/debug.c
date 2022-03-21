#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * link;
}node;

int main()
{
    int n;
    int i;
    int x;
    node * H;
    node * p;
    node * q;
    printf("H : %d\n",H);
    printf("p : %d\n",p);
    printf("Enter the size (n) of the single linked list :: ");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Invalid (n)");
        return 0;
    }
    else
    {
        i = 1;
        do
        {
            printf("Enter element (x) you want to insert in node %d :: ",i);
            scanf("%d",&x);
            q = (node *)malloc(sizeof(node));
            q -> data = x;

            if (i == 1)
            {
                H = q;
            }
            else
            {
                p->link = q;
            }
            p = q;
            i++; 

            printf("H : %d\n",H);
            printf("q : %d\n",q);
            printf("p : %d\n",p);
            
        } while ( i<=n );
    
        p -> link = NULL;
        p = NULL;
        //&q = NULL;
    }
}