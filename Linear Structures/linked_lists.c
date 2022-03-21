#include <stdio.h>

typedef struct
{
	int data;
	int * link;
}node;

int main()
{
	int index;
	int n;
	int i;
	int x;
	node * h;
	node * p;
	printf("Enter size (n) of the linked list :: ");
	scanf("%d",&n);
	if (n <= 0)
	{
		printf("Invalid!!!");
		return 0;
	}
	else
	{
		i = 1;
		do
		{
			printf("Enter element (x) you want to add to the list :: ");
			scanf("%d",&x);
			node q;
			q.data = x;
			if (i == 1)
			{
				h = &q;
				printf("Chnged");
			}
			else
			{
				p -> link = &q;
			}
			p = &q;
			i++;
		}	while (i<=n);
		p -> link = NULL;
	}
	printf("%d",p -> data);
}
