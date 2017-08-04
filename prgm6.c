#include <stdio.h>

 float vel_k_m(float);

int main()
{
	float vel,fv;
	printf("enter the initial velocity in km/hr\n");
	scanf("%f",&vel);
	vel_k_m(vel);
	fv=((vel_k_m(vel))*(vel_k_m(vel))+2*(2.85)*(1400));
	printf("%f\n",fv );
	if(fv > 15882)
	{
		printf("the plane may hit the runway \n");
	}
	else
	{
		printf("plane will land safely\n");
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