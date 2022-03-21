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
		printf("%d <-> ",p->data);
		p = p -> right_link;
	}
	
}
node * create_new_double_linked_list()
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
    return H;
}
int main()
{
	int a;
	int i = 1;
	int x;
	node * H = NULL;
	node * p = NULL;
	node * q = NULL;
	H = create_new_double_linked_list();
	if ( H == NULL )
	{
		printf("No List");
		return 0;
	}
	else
	{
		printf("\nEnter the element you wish to search for :: ");
		scanf("%d",&a);
		p = H;
		
		while(p->data != a)
		{
			p = p -> right_link;
			if (p == NULL)
			{
				printf("Not Found");
				return 0;
			}
		}
		printf("Enter the value (x) you want to insert :: ");
		scanf("%d",&x);
		q = (node*)malloc(sizeof(node));
        q -> data = x;
        
        if (p==H)
        {
        	q -> right_link = p;
        	H = q;
		}
		else
		{
			q -> right_link = p;
			q -> left_link = p -> left_link;
			p -> left_link -> right_link = q;
			p -> left_link = q;
		}
		p = NULL;
		q = NULL;
	}
	displayList(H);	
}

