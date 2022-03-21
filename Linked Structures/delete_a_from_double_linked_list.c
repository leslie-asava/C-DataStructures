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
	node * H = NULL;
	node * p = NULL;
	H = create_new_double_linked_list();
	if ( H == NULL )
	{
		printf("No List");
		return 0;
	}
	else
	{
		printf("\nEnter the element you wish to delete :: ");
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
		if (p!=H)
        {
        	p -> left_link -> right_link = p -> right_link;
        	
        	if (p -> right_link != NULL)
        	{
        		p -> right_link -> left_link = p -> left_link;
			}
        	p = NULL;
		}
		else
		{
			H = p -> right_link;
			p = NULL;
		}
	}
	displayList(H);
	
}

