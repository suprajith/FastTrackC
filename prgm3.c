#include <stdio.h>

int main()
{
	float watt,lumi_eff,flux;
	printf("Enter the value in watt:");
	scanf("%f",&watt);
	printf("\nEnter the luminous efficiency of the source:");
	scanf("%f",&lumi_eff);
	flux=watt*lumi_eff;
	printf("Calculated value in Luminous Flux:%f",flux);

	return 0;

}