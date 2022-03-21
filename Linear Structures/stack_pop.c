#include <stdio.h>

int main()
{
    int n = 5;
    int top = n;
    int max = 7;
    int stack[max] = {1,2,3,4,5};
    if (n <= 0)
    {
        printf("Empty stack");
        return 0;
    }
    else
    {
        n--;
    }
    for (int i = 0;i < n;i++)
    {
        printf("%d\n",stack[i]);
    }
    return 0; 
}    