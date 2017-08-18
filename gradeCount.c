#include<stdio.h>
#include<assert.h>

int get_grade_count(char);

char student_grades[51] = "ABCACCCBAABBABCBBAAAABCAACCBCBBCCCAABCCABBCCCCAAAB";
int main()
{
	char grade;
	int students;
	printf("Enter the grade: ");
	scanf("%c",&grade);

	students = get_grade_count(grade);
	printf("\n%d Students are with %c grade",students,grade);

	assert(get_grade_count('A') == 17);
	assert(get_grade_count('B') == 27);
	return 0;
}

int get_grade_count(char grade)
{
	int i,count=0;
	
	for(i=0;i<50;i++)
	{
		if(student_grades[i] == grade)
			count++;
	}
	
	return count;
}
