#include <stdio.h>
int main()
{
	float j, t;
	double kwh;
	printf("Enter the values in joules and also time in seconds");
	scanf("%f %f", &j, &t);
	kwh=j/(3600000*t);
	printf("The value in KWH is %lf", kwh);

	return 0;

}