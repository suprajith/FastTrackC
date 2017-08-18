#include<stdio.h>
#include<assert.h>

char str[] = "Given a vowel count the number of occurrence in string";

int countVowels(char vowel)
{
	int i,j=0;
	for(i=0;str[i]!='\0';i++)
		if(str[i] == vowel || str[i] == vowel + 32 || str[i] == vowel - 32)
			j++;
	printf("j = %d",j);	
	return j;
}

int main()
{
	assert(countVowels('i') == 3);
	assert(countVowels('o') == 5);

	return 0;
}