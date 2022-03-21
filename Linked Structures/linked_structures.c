#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * link;
}node;

 
typedef struct d_node
{
	struct d_node * left_link;
    int data;
    struct d_node * right_link;
}d_node;

int display_single_linked_list(node * H)
{
	node * p;
	p = H;
	while (p != NULL)
	{
		printf("%d -> ",p->data);
		p = p -> link;
	}
	
}

int display_double_linked_list(d_node * H)
{
	d_node * p;
	p = H;
	while (p != NULL)
	{
		printf("%d <-> ",p->data);
		p = p -> right_link;
	}
	
}

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
    display_single_linked_list(H);
    return H;
}

int search_single_linked_list()
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
		printf("\nEnter the element you wish to search for :: ");
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

int insert_into_single_linked_list()
{
	int response;
	int a;
	int x;
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
		}
		
		printf("\nEnter the value (x) you want to insert :: ");
		scanf("%d",&x);
		q = (node*)malloc(sizeof(node));
        q -> data = x;
        
        printf("At which position do you want to insert? \n\t1) Before \n\t2) After \n");
        scanf("%d",&response);
        switch (response)
        {
        	case 1 : // Insert Before
			{
				if (p==H)
		        {
		        	q -> link = p;
		        	H = q;
				}
				else
				{
					q -> link = p;
					s -> link = q;
				}
				break;
			}
        	case 2 : // Insert After
			{
				s = p -> link;
				p -> link = q;
				q -> link = s;
			}
			break; 
		}
        
		p = NULL;
		q = NULL;
	}
	display_single_linked_list(H);
	
}

int delete_from_single_linked_list()
{
	int a;
	int x;
	int response;
	node * H = NULL;
	node * p = NULL;
	node * s = NULL;
	H = create_new_single_linked_list();
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
			s = p;
			p = p -> link;
			if (p == NULL)
			{
				printf("Not Found");
				return 0;
			}
		}
		printf("At which position do you want to delete? \n\t1) At \n\t2) After \n");
        scanf("%d",&response);
        switch (response)
        {
        	case 1 : // Delete At
    		{
    			if (p!=H)
		        {
		        	s -> link = p -> link;
		        	p = NULL;
		        	s = NULL;
				}
				else
				{
					H = p -> link;
					p = NULL;
				}
			}
			break;
			
			case 2 : // Delete After
			{
				p -> link = p -> link -> link;
				p = NULL;
			}		
		}
	}
	display_single_linked_list(H);	
}

d_node * create_new_double_linked_list()
{
    int n;
    int i;
    int x;
    d_node * H = NULL;
    d_node * p = NULL;
    d_node * q = NULL;
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
            q = (d_node*)malloc(sizeof(d_node));
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
    display_double_linked_list(H);
    return H;
}

int search_double_linked_list()
{
	int a;
	int i = 1;
	d_node * H = NULL;
	d_node * p = NULL;
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
			i++;
		}
		printf("Found at position %d",i);
	}
	
}

int insert_into_double_linked_list()
{
	int response;
	int a;
	int i = 1;
	int x;
	d_node * H = NULL;
	d_node * p = NULL;
	d_node * q = NULL;
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
		q = (d_node*)malloc(sizeof(d_node));
        q -> data = x;
        
        printf("At which position do you want to insert? \n\t1) Before \n\t2) After \n");
        scanf("%d",&response);
        switch (response)
        {
        	case 1 : // Insert Before
        	{
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
			}
			break;
			case 2 : // Insert After
			{
				q -> right_link = p -> right_link;
				q -> left_link = p;
				p -> right_link -> left_link = q;
				p -> right_link = q;
			}
			break;
		}
		p = NULL;
		q = NULL;
	}
	display_double_linked_list(H);	
}

int delete_from_double_linked_list()
{
	int a;
	int response;
	d_node * H = NULL;
	d_node * p = NULL;
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
		printf("At which position do you want to delete? \n\t1) At \n\t2) After \n\t3) Before\n");
        scanf("%d",&response);
        switch (response)
        {
        	case 1 : // Delete At
        	{
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
			break;
			case 2 : // Delete After
			{
				p -> right_link = p -> right_link -> right_link;
				
				if (p -> right_link -> right_link != NULL)
				{
					p -> right_link -> left_link = p;
				}
			}
			break;
			case 3 : // Delete Before
			{
				if (p -> left_link != H)
				{
					p -> left_link = p -> left_link -> left_link;
				}
				else
				{
					H = p;
				}
				p -> left_link -> right_link = p;
			}
		}
	}
	display_double_linked_list(H);
	
}

int main()
{
	int response;
	printf("Please select the linked structure :: \n\t1) Single Linked List \n\t2) Double Linked List\n");
	scanf("%d",&response);
	switch (response)
	{
		case 1 :
			{
				printf("Which operation do you want to perform? \n\t1) Creation \n\t2) Search \n\t3) Insertion \n\t4) Deletion\n");
				scanf("%d",&response);
				switch (response)
				{
					case 1 : 
					{
						node * H;
						H = create_new_single_linked_list();
						break;
					}
					case 2 : search_single_linked_list();
					break;
					case 3 : insert_into_single_linked_list();
					break;
					case 4 : delete_from_single_linked_list();
					break;
				}
			}
			break;
		case 2 :
			{
				printf("Which operation do you want to perform? \n\t1) Creation \n\t2) Search \n\t3) Insertion \n\t4) Deletion\n");
				scanf("%d",&response);
				switch (response)
				{
					case 1 : 
					{
						d_node * H;
						H = create_new_double_linked_list();
						break;
					}
					case 2 : search_double_linked_list();
					break;
					case 3 : insert_into_double_linked_list();
					break;
					case 4 : delete_from_double_linked_list();
					break;
				}
			}
			break;
	}	
}

