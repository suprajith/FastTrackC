#include <stdio.h>

 float vel_k_m(float);

int main()
{
	float vel,dist;
	printf("enter the initial velocity in km/hr\n");
	scanf("%f",&vel);
	vel_k_m(vel);
	dist = (((vel_k_m(vel)+0)/2)*3);
	printf("%f\n",dist );
	if(dist > 30)
	{
		printf("the car may hit the truck\n");
	}
	else
	{
		printf("car will not truck\n");
	}



	/* code */
	return 0;
}

float vel_k_m(float v)
{
	v = v * 0.2777778;
	printf("velocityin m/s is  %f\n", v);
	return v;
}