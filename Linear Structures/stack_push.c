#include <stdio.h>

int main()
{
    int n = 5;
    int top = n;
    int max = 7;
    int x;
    int stack[max] = {1,2,3,4,5};
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
    for (int i = 0;i < n;i++)
    {
        printf("%d\n",stack[i]);
    }
    return 0; 
}