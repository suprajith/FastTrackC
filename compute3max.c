/*----------------------------------------------------------------------------
Compute  first 3  maximum numbers in the given list.
------------------------------------------------------------------------------*/

#include<stdio.h>

int main()
{
	int array[100],n,i;

	printf("Enter number of integers: ");
	scanf("%d",&n);

	printf("Enter the integers:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);

	compute3max(array,n);
	return 0;
}

int compute3max(int array[], int n)
{
	int c, d, swap;

	for (c = 0 ; c < ( n - 1 ); c++)
	{
		for (d = 0 ; d < n - c - 1; d++)
		{
			if (array[d] > array[d+1])
			{
				swap       = array[d];
				array[d]   = array[d+1];
				array[d+1] = swap;
			}
		}
	}

	printf("The first 3 maximum numbers are:\n");

	for ( c = n-1 ; c >= n-3; c-- )
		printf("%d\n", array[c]);

	return 0;
}