#include <stdio.h>

int main()
{
	int fib[3],i;
	printf("\nEnter the Fibonacci series:");
	for(i=0;i<3;i++)
	scanf("%d",&fib[i]);
	if(fib[2]==fib[0]+fib[1])
		printf("\nThe given series is in the form of Fibonacci series\n");
	else
		printf("\nThe given series is not in the form of Fibonacci series\n");
	return 0;

}