/* Read a file which contains one number per line. Check the number is odd or even and write to corresponding files. Note: Numbers may not be single digit numbers.*/

#include<stdio.h>
int main()
{
FILE *fptr,*fo,*fe;
int i,num,n;
fptr = fopen("Input.txt","r");
fe   = fopen("Even.txt","w");
fo   = fopen("Odd.txt","w");

fprintf(fe,"Even numbers:\n");
fprintf(fo,"Odd numbers:\n");

while(!feof(fptr))
 {
	  fscanf(fptr,"%d",&num);
	  if(num%2==0)
	{
	  fprintf(fe,"%d\n",num);
	}
	else
	{
	  fprintf(fo,"%d\n",num);
	}
 }

fprintf(fe,"\n");
fprintf(fo,"\n");
printf("Files created successfully");

fclose(fptr);
fclose(fe);
fclose(fo);
return 0;
}
