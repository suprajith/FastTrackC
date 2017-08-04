#include <stdio.h>
int fact(float n);
int main()
{
	float n,i;
	float sum=1;
	printf("\nEnter the value of n:");
	scanf("%f",&n);
	for(i=2;i<=n;i++)
	{
		sum=sum+(1/fact(n));
		printf("\n%f\n",sum);
	}
	printf("\n Sum of the series 1+ 1/2!+ 1/3!..... is  %f\n",sum);
	printf("fact of n %d", fact(n));

	return 0;
}

int fact(float n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else
		return n*fact(n-1);
}