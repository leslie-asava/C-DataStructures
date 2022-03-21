#include <stdio.h>

int main()
{
	int n;
	int f;
	int r;
	int x;
	int i;
	printf("Enter size (n) of the queue");
	scanf("%d",&n);
	int queue[n];
	if (n <= 0)
	{
		printf("Invalid n !!");
		return 0;
	}
	else
	{
		i = 1;
		do
		{
			printf("Enter element (x) to enqueue :: ");
			scanf("%d",&x);
			if (i = 1)
			{
				f = 1;
				r = 1;
			}
			else
			{
				r = r + 1;
				if (f == r + 1)
				{
					if (f == 1)
					{
						printf("Full Queue");
						return 0;
					}
					else
					{
						r = 1;
					}
				}
			}
			queue[r] = x;
			i = i + 1;
		} while (i <= n);
	}
}
