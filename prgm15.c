#include<stdio.h>
#include<math.h>

int main(){

	int num1,num2,power=0;

	printf("num1 and num2=\n");
	scanf("%d%d\n",&num1,&num2);

	power = (int)pow(num1,num2);
	printf("%d\n",power);
	return 0;
}