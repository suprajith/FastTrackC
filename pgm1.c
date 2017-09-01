/*Program to display the contents of a file*/

#include<stdio.h>

int main()
{
 FILE *fp;
 char ch;
 fp = fopen("Input.txt","r");
 if(fp == NULL)
 {
   printf("Unable to read file");

 }
    ch = fgetc(fp);

    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fp);
    }
 
fclose(fp);
}
