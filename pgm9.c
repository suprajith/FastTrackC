#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int stringlength(char c[]);
int main()
{
	char str[1000],ch[1000],temp;
	int i,j=0;
	FILE *fptr;
	if ((fptr = fopen("Input.txt", "r")) == NULL)
    	{
        printf("Error! opening file");
        exit(1);         
    	}
	
    	fscanf(fptr,"%[^\n]", str);
    	printf("Data from the file:%s\n", str);
	
	i = 0;
        j = strlen(str) - 1;
 
	   while (i < j) {
	      temp = str[i];
	      str[i] = str[j];
	      str[j] = temp;
	      i++;
	      j--;
	   }
        printf("Reversed string%s\n",str);
        
	fptr = fopen("Input.txt", "w");
        if ((fptr = fopen("Input.txt", "w")) == NULL)
    	{
        printf("Error! opening file");
        exit(1);         
    	}
        else{
	fprintf(fptr,"%s",str);
        printf("File reversed successfully\n");
       }
	fclose(fptr);
	return 0;
}
