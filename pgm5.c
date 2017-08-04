

#include <stdio.h>
 /*place ; in  --> printf("Enter the number of elements in array\n")
maxium is not declared in -->maxium = array[0];
Missing , in --> scanf("%d" &array[c]);
place ; in  --> for (c = 1: c < size: c++)
place ; in  --> location = c+1:
*/

int main()
{
  int array[100], maximum, size, c, location = 1;
 
 printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d",&array[c]);
 
  maximum = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 
  return 0;
}
