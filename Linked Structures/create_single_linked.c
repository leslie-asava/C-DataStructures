#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node * link;
}node;

node * createList(int n)
{
	int i = 0;
	node * H = NULL;
	node * temp = NULL;
	node * p = NULL;
	
	for (i=0;i<n;i++)
	{
		temp = (node*)malloc(sizeof(node));
		printf("Enter the data :: ");
		scanf("%d",&(temp->data));
		temp -> link = NULL;
		
		if (H == NULL)
		{
			H = temp;
		}
		else
		{
			p = H;
			while(p->link != NULL)
			{
				p = p -> link;
			}
			p -> link = temp;
		}
	}
	return H;
}

int displayList(node * H)
{
	node * p = H;
	while (p != NULL)
	{
		printf("%d",p->data);
		p = p -> link;
	}
}

int main()
{
	int n = 0;
	node * H = NULL;
	printf("How many nodes do you want? :: ");
	scanf("%d",&n);
	H = createList(n);
	displayList(H);
	return 0;
}
