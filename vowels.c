#include<stdio.h>
#include<assert.h>

int countVowels(char str[])
{
	int i,j=0;
	for(i=0;str[i]!='\0';i++)
		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] =='o' || str[i]=='O' || str[i] == 'u' || str[i] == 'U')
			j++;
		
	return j;
}

int main()
{
	assert(countVowels("Girish") == 2);
	assert(countVowels("aeiou") == 4);

	return 0;
}