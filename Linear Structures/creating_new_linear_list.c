#include <stdio.h>

int main()
{
	int size;
	int counter;
	printf("Enter the size of the linear list");
	scanf("%d",&size);
	int linear_list[size];
	if (size < 0)
	{
		return 0;
	}
	else
	{
		counter = 1;
		do
		{
			printf("Enter element :: ");
			scanf("%d",&linear_list[counter-1]);
			counter++;
		}
		while (!(counter > size));
	}

}
