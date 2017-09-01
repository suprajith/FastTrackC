#include<stdio.h>

float GetSlope(float x1,float y1,float x2,float y2);
int main()
{
  float xa1,xa2,ya1,ya2,xb1,yb1,xb2,yb2;
  float slope1,slope2;
  printf("Enter the co-ordinates of line 1 (x1,y1,x2,y2):");
  scanf("%f%f%f%f",&xa1,&ya1,&xa2,&ya2);
  printf("Enter the co-ordinates of line 2 (x1,y1,x2,y2):");
  scanf("%f%f%f%f",&xb1,&yb1,&xb2,&yb2);
  //printf("Line 1 co-ordinates are:x1=%f,y1=%f,x2=%f,y2=%f\n",xa1,ya1,xa2,ya2);
  slope1 =GetSlope(xa1,ya1,xa2,ya2);
  //printf("Slope of line 1: %f\n",slope1);
  //printf("Line 2 co-ordinates are:x1=%f,y1=%f,x2=%f,y2=%f\n",xb1,yb1,xb2,yb2);
  slope2=GetSlope(xb1,yb1,xb2,yb2);
 // printf("Slope of line 1: %f\n",slope2);
  if(slope1 == slope2)
  { 
    printf("The two lines are parallel\n");
  }
  else
  {
   printf("The two lines are not parallel\n");
  }
 return 0;
}

float GetSlope(float x1,float y1,float x2,float y2)
{
  float result ;
  result = (y2-y1)/(x2-x1);
  return result;
}
