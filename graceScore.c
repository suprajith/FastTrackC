/*---------------------------------------------------------------------------------------------
Add some grace marks to the internal scores. Care should be taken such that after adding grace,
score should not exceed the max marks (50). Marks to be added are 45 -49  2 marks, 40 – 44  3 
marks, 35 – 39  4 marks, 30 – 34  5 marks 25 – 29 it will be 6 marks. Those who scored less 
than 25, marks are boosted to 25. Check whether added marks are correct using assert.
-----------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<assert.h>

int graceScore(int);

int main()
{
	int marks;
/*
	printf("Enter the marks of the student: ");
	scanf("%d",&marks);

	graceScore(marks);
	printf("After adding the grace marks is : %d",  graceScore(marks));
*/
	assert(graceScore(45) == 47);
	assert(graceScore(44) == 47);
	assert(graceScore(33) == 38);
	assert(graceScore(15) == 25);
	assert(graceScore(51) == 50);
	assert(graceScore(00) == 25);

	assert(graceScore(11) == 15);
	return 0;
}

int graceScore(int m)
{
	
	if(m>=49)
		return 50;
	if(m>=45 && m<49)		
		return m+2;
	else if(m>=40 && m<=44)
		return m+3;
	else if(m>=35 && m<=39)
		return m+4;
	else if(m>=30 && m<=34)
		return m+5;
	else if(m>=25 && m<=29)
		return m+6;
	else if(m<25)
		return 25;
}