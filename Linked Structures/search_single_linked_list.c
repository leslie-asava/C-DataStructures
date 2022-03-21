#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * link;
}node;


node * create_new_single_linked_list()
{
    int n;
    int i;
    int x;
    node * H = NULL;
    node * p = NULL;
    node * q = NULL;
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
            q = (node*)malloc(sizeof(node));
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
           
        } while ( i<=n );
    
        p -> link = NULL;
        p = NULL;
        q = NULL;
    }
    return H;
}

int main()
{
	int a;
	int i = 1;
	node * H = NULL;
	node * p = NULL;
	node * q = NULL;
	node * s = NULL;
	H = create_new_single_linked_list();
	if ( H == NULL )
	{
		printf("No List");
		return 0;
	}
	else
	{
		printf("Enter the element you wish to search for :: ");
		scanf("%d",&a);
		p = H;
		
		while(p->data != a)
		{
			s = p;
			p = p -> link;
			if (p == NULL)
			{
				printf("Not Found");
				return 0;
			}
			i++;
		}
		printf("Found at position %d",i);
	}
	
}
