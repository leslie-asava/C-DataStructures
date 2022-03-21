#include <stdio.h>

int index;
int response;

int create_new_linear_list()
{
	int n;
    int i;
    int max = 20;
    printf("Enter the size of the linear list :: ");
    scanf("%d",&n);
    int linear_list[max];
    if (n < 0)
    {
        printf("Invalid n");
        return 0;
    }

    else
    {
        i = 1;
        do 
        {
            printf("Enter element %d :: ", i);
            scanf("%d",&linear_list[i-1]);
            i++;
        } while (!(i > n));
    }
    for (index=0;index<n;index++)
    {
        printf("%d\n",linear_list[index]);
    }
}

int insertion()
{
	int n;
    int i;
    int j;
    int x;
    int element;
    int index;
    int max = 20;
    printf("Enter the size of the linear list :: ");
    scanf("%d",&n);
    int linear_list[max];
    if (n < 0)
    {
        printf("Invalid n");
        return 0;
    }

    else
    {
        i = 1;
        do 
        {
            printf("Enter element %d :: ", i);
            scanf("%d",&linear_list[i-1]);
            i++;
        } while (!(i > n));
    }
    if (n < 0)
    {
        printf("Empty list !");
        return 0;
    }
    else
    {
        printf("Enter referrence element :: ");
        scanf("%d",&element);
        i = 1;
        j = n;

        while (!(linear_list[i-1] == element))
        {
            i++;
            if (i > n)
            {
                printf("Element %d does not exist",element);
                return 0;
            }
        }
        printf("At which position of the referrence do you wish to insert :: \n\t1) Before \n\t2) After\n");
        scanf("%d",&response);
        switch(response)
        {
        	case 1 : i = i; // No change
        	break;
        	case 2 : i += 1;
        	break;
		}
        do 
        {
            linear_list[j+1] = linear_list[j];
            j--;
        } while (j >= i-1);
        printf("Enter the element (x) to insert :: ");
        scanf("%d",&x);
        linear_list[i-1] = x;
        n++;
    }
    for (index=0;index<n;index++)
    {
        printf("%d\n",linear_list[index]);
    }
}

int deletion()
{
	int n;
    int i;
    int x;
    int element;
    int max = 20;
    printf("Enter the size of the linear list :: ");
    scanf("%d",&n);
    int linear_list[max];
    if (n < 0)
    {
        printf("Invalid (n)!!");
        return 0;
    }

    else
    {
        i = 1;
        do 
        {
            printf("Enter element %d :: ", i);
            scanf("%d",&linear_list[i-1]);
            i++;
        } while (!(i > n));
    }
    if (n < 0)
    {
        printf("Empty list !");
        return 0;
    }
    else
    {
        printf("Enter referrence element :: ");
        scanf("%d",&element);
        i = 1;

        while (!(linear_list[i-1] == element))
        {
            i++;
            if (i > n)
            {
                printf("Element %d does not exist",element);
                return 0;
            }
        }
        printf("At which position of the referrence do you wish to delete :: \n\t1) Before \n\t2) At \n\t3) After\n");
        scanf("%d",&response);
        switch(response)
        {
        	case 1 : i -= 1;
        	break;
        	case 3 : i += 1;
        	break;
		}
        do 
        {
            linear_list[i-1] = linear_list[i];
            i++;
        } while (i < n);
        n--;
    }
    for (index=0;index<n;index++)
    {
        printf("%d\n",linear_list[index]);
    }
}

int push()
{
	int n;
    int top;
    int max;
    int x;
    int i;
    printf("Enter the maximum size of the stack :: ");
    scanf("%d",&max);
    int stack[max];
    printf("Enter the actual size of the size :: ");
    scanf("%d",&n);
    top = n;
    if (n < 0)
    {
        printf("Invalid (n)!!");
        return 0;
    }

    else
    {
        i = 1;
        do 
        {
            printf("Enter element %d :: ", i);
            scanf("%d",&stack[i-1]);
            i++;
        } while (!(i > n));
    }
    if (n >= max)
    {
        printf("Full stack");
        return 0;
    }
    else
    {
        printf("Enter the element you want to push to the stack :: ");
        scanf("%d",&x);
        stack[top] = x;
        n++;
    }
    for (index = 0;index < n;index++)
    {
        printf("%d\n",stack[index]);
    }
	
}

int pop()
{
	int i;
	int n;
    int top;
    int max;
    printf("Enter the maximum size of the stack :: ");
    scanf("%d",&max);
    int stack[max];
    printf("Enter the actual size of the size :: ");
    scanf("%d",&n);
    top = n;
    if (n < 0)
    {
        printf("Invalid (n)!!");
        return 0;
    }

    else
    {
        i = 1;
        do 
        {
            printf("Enter element %d :: ", i);
            scanf("%d",&stack[i-1]);
            i++;
        } while (!(i > n));
    }
    if (n <= 0)
    {
        printf("Empty stack");
        return 0;
    }
    else
    {
        n--;
    }
    for (index = 0;index < n;index++)
    {
        printf("%d\n",stack[index]);
    }
 
}

int enqueue(int element,int size)
{
	int r = -1;
	int n = size;
	int f = -1;
	int queue[20];
    if(r == n-1)
        printf("\nQueue is full!!");
    else {
	       if (f == -1)
		        {
		        	f = 0;
		 }
    r++;
    queue[r] = element;
    printf("\nInserted  %d", element);
}
}

int dequeue()
{
	int n;
	int y;
	int f = 1;
	int max;
	int i;
	printf("Enter the maximum size of the queue :: ");
    scanf("%d",&max);
    printf("Enter the actual size of the queue :: ");
    scanf("%d",&n);
	int queue[max];
	i = 1;
	do 
        {
            printf("Enter element %d :: ", i);
            scanf("%d",&queue[i-1]);
            i++;
        } while (!(i > n));
	if (n <= 0)
	{
		printf("Empty queue!!");
		return 0;
	}
	else
	{
		y = queue[f - 1]; 
		f = f + 1;
		if (f > n)
		{
			f = 1;
		}
	}
	return y;
	
}

int create_new_single_linked_list()
{
	
}

int main()
{
	int element;
	int size;
	printf("Select the type of structure :: \n\t1) Linear Structures \n\t2) Linked Structures\n");
	scanf("%d",&response);
	switch (response)
	{
		case 1 :
			{
				printf("Select linear structure :: \n\t1) Linear lists \n\t2) Stacks \n\t3) Queues\n");
            	scanf("%d",&response);
            	switch (response)
            	{
            		case 1 :
            			{
            				printf("Select the operation you want to perform :: \n\t1) Create new linear list \n\t2) Insertion \n\t3) Deletion\n");
		                    scanf("%d",&response);
		                    switch (response)
		                    {
		                    	case 1 : create_new_linear_list();
		                    	break;
		                    	case 2 : insertion();
		                    	break;
		                    	case 3 : deletion();
		                    	break;
							}
						}
					break;
					case 2 :
						{
							printf("Select the operation you want to perform :: \n\t1) Push \n\t2) Pop\n");
							scanf("%d",&response);
							switch (response)
							{
								case 1 : push();
								break;
								case 2 : pop();
								break;
							}
						}
					break;
					case 3 : 
						{
							printf("Select the operation you want to perform :: \n\t1) Enqueue \n\t2) Dequeue\n");
							scanf("%d",&response);
							switch (response)
							{
								case 1 :
									{
										printf("Enter the size of the queue :: ");
										scanf("%d",&size);
										for (index = 0; index < size; index ++);
										{
											printf("Enter the element to enqueue :: ");
											scanf("%d",&element);
											enqueue(element,size);
											
										}
									}
								break;
								case 2 : printf("The operation returned %d "),dequeue();
								break;
							}
						}
					break;
				}
			}
		break;
		case 2 : 
			{
				printf("Select linked structure \n\t1) Single linked list\n");
				scanf("%d",&response);
				switch (response)
				{
					case 1 :
						{
							printf("Select the operation you want to perform :: \n\t1) Create new single linked list\n");
							scanf("%d",&response);
							switch (response)
							{
								case 1 : create_new_single_linked_list();
								break;
							}
						}
				}
			}
	}
}
