#include<stdio.h>
 /*PI is not defined in --> area = PI * rad * rad;
%f is not in -->printf("\nArea of circle : f ", area);
%d is not in -->scanf("d", &rad);
*/

int main() 
{
 
   int rad;
   float Pi = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   area = Pi * rad * rad;
   printf("\nArea of circle : %f ", area);
 
   ci = 2 * Pi * rad;
   printf("\nCircumference : %f ", ci);
 
   return 0;
}
