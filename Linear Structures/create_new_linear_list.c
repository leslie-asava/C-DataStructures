#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Enter the size of the linear list :: ");
    scanf("%d",&n);
    int linear_list[n];
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
}