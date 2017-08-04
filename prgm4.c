#include <stdio.h>

int main()
{
	float kmph,mpsc;

	printf("Enter the value of velocity in kmph:" );
	scanf("%f",&kmph);
	mpsc=kmph*5/18;
	printf("\nThe value of velocity in mpsc:%f",mpsc);

	return 0;
}