#include<stdio.h>
#include<stdlib.h>
void main()
{

	FILE *fs1, *fs2;
	char ch;
        int num[1000],temp,i=0,size;

	fs1=fopen("A.txt", "a");
	fs2=fopen("B.txt", "r");

	if(fs1==NULL || fs2==NULL)
	{
		perror("Error Message ");
		printf("Press any key to exit...\n");
		exit(EXIT_FAILURE);
	}
	
	while((ch=fgetc(fs2))!=EOF)
	{
		fputc(ch, fs1);
	}
	
	fclose(fs1);
	fclose(fs2);

	fs1=fopen("A.txt", "r");
     
	while (!feof (fs1))
	    {   
              fscanf (fs1, "%d", &num[i]);   
              i++;   
	    }
        size = i;
	fclose (fs1);  
       

	 for (int i = 0; i < size - 1; i++) 
          {        
             for (int j = 0; j < size - 1; j++)         
		 {             
		     if (num[j] > num[j+1])             
		     {                 
		         temp = num[j];   
		         num[j] = num[j+1];  
		         num[j+1] = temp;  
		      }        
		  }  
          }

        fs1=fopen("A.txt", "w");

	for(i=1;i<size;i++)
	{
		fprintf(fs1,"%d\n",num[i]);
	}
        
        fclose(fs1);
}
