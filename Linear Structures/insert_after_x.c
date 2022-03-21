#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int x;
    int element;
    int index;
    int linear_list[20] = {10,20,30,40,50};
    printf("Enter the size of the array :: ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("Empty list !");
        return 0;
    }
    else
    {
        printf("Enter the element at whose position you want to insert after :: ");
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
        i++;
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