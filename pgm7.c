#include <stdio.h>
void main()
{
   int *a,i,j,tmp,n,b;
   FILE *fp;
   fp = fopen("Input.txt","w");   
   
   printf(" Input the number of elements to store in the file : ");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the file : \n",n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",&b);
          fprintf(fp,"%d\n",b);
      }   
   fclose(fp);
  
   fp = fopen("Input.txt","r"); 

   if(fp==NULL)
   {
    printf("Unable to find file");
   }
    
   for(i=0;i<n;i++)
      {
          fscanf(fp,"%d\n",a+i);
      }   
    
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) < *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }

  fp = fopen("Input.txt","w"); 
   
   for(i=0;i<n;i++)
      {
         fprintf(fp,"%d\n",*(a+i));
      }         
 fclose(fp);
}
