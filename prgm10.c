// C program to change case of an alphabet.
#include<stdio.h>
void main()
{
   char ch;
   printf("Please enter an alphabet : ");
   scanf("%c", &ch);
   if('a' <=  ch && ch <= 'z')
   {
      printf("Upper case of %c is %c\n", ch, ch-32);
   }
   else if('A' <=  ch && ch <= 'Z')
   {
      printf("Lower case of %c is %c\n", ch, ch+32);
   }
   else
   {
      printf("Entered character %c is a special character", ch);
   }
}