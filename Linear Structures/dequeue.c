#include <stdio.h>

int main()
{
	int n;
	int y;
	int f = 1;
	int max;
	printf("Enter the maximum size of the queue :: ");
    scanf("%d",&max);
    int stack[max];
    printf("Enter the actual size of the queue :: ");
    scanf("%d",&n);
	int queue[max];
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
	printf("Function returned :: %d",y);
	return 0;
}
