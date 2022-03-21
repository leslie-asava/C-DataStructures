#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	struct node * left_link;
    int data;
    struct node * right_link;
}node;

int displayList(node * H)
{
	node * p;
	p = H;
	while (p != NULL)
	{
		printf("%d -> ",p->data);
		p = p -> right_link;
	}
	
}
int main()
{
    int n;
    int i;
    int x;
    node * H = NULL;
    node * p = NULL;
    node * q = NULL;
    printf("Enter the size (n) of the double linked list :: ");
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
            q = (node*)malloc(sizeof(node));
            q -> data = x;

            if (i == 1)
            {
                H = q;
                q -> left_link = NULL;
            }
            else
            {
                p->right_link = q;
                q->left_link = p;
            }
            p = q;
            i++; 
            
        } while ( i<=n );
    
        p -> right_link = NULL;
        p = NULL;
        q = NULL;
    }
    displayList(H);
}
