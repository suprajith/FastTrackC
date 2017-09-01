#include<stdio.h>
void main()
{
  FILE *fp1,*fp2;
  char ch;
  fp1 = fopen("Text1.txt","r");
  fp2 = fopen("Text2.txt","w");
  if(fp1 == NULL)
{
  printf("unable to open file Text1.txt");
}
 if(fp2 == NULL)
{
  printf("unable to open file Text2.txt");
}
  while(1)
  {
   ch = getc(fp1);
    if(ch==EOF)
  {
    break;
   }
  else
  {
    putc(ch,fp2);   
  }
}
  printf("File copied successfully\n");
  fclose(fp1);
  fclose(fp2);
}

