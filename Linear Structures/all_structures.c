#include <stdio.h>

int n;
int i;
int response;
int index;

int * create_new_linear_list()
{
    printf("Enter the size of the linear list (n) :: ");
    scanf("%d",&n);
    int linear_list[n];
    if (n < 0)
    {
        return 0;
    }
    else
    {
        i=1;
        do
        {
            printf("Enter element %d :: ",i);
            scanf("%d",&linear_list[i-1]);
            i++;
        } while (!(i > n));
        
    }

    for (index=0;index<n;index++)
    {
        printf("%d\n",linear_list[index]);
    }

    return linear_list;
    
}

int insertion()
{

    int index;
    int j;
    int x;
    int element;
    int * linear_list = create_new_linear_list();
    if (n < 0)
    {
        printf("Empty list !");
        return 0;
    }
    else
    {
        printf("Enter the referrence element :: ");
        scanf("%d",element);
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

        printf("At which position do you want to insert? \n 1) Before \n After \n At \n");
        scanf("%d",&response);
        switch (response)
        {
            case 1 : i = i - 1;
            break;
            case 2 : i = i; // No change
            break;
            case 3 : i = i + 1;
            break;
        }
        do 
        {
            linear_list[j+1] = linear_list[j];
            j--;
        } while (j >= i-1);
        printf("Enter the element to insert :: ");
        scanf("%d",&x);
        linear_list[i-1] = x;
        n++;
    }
    for (index=0;index<n;index++)
    {
        printf("%d\n",linear_list[index]);
    }
    
}

int main()
{
    printf("Select the type of structure :: \n 1) Linear Structures \n 2) Linked Structures \n");
    scanf("%d",&response);
    switch (response)
    {
        case 1 : 
        {
            printf("Select linear structure :: \n 1) Linear lists 2) Stacks 3) Queues \n");
            scanf("%d",&response);
            switch (response)
            {
                case 1 :
                {
                    printf("Select the operation you want to perform:: \n 1) Create new linear list 2) Insertion 3) Deletion \n");
                    scanf("%d",&response);
                    switch (response)
                    {
                        case 1 : create_new_linear_list();
                        break;
                        case 2 : insertion();
                        break;
                    }
                }
                break;

                case 2 :
                {
                    printf("Select the operation you want to perform:: \n 1) Push \n 2) Pop");
                    scanf("%d",&response);
                    switch (response)

                }
            }
        }
        break;
    }
}
