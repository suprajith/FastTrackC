/*------------------------------------------------------------------------
1. Write function to compare whether the elements in two arrays are same.
--------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<assert.h>

int compare(char str1[], char str2[])
{
	int i=0;

	if(strlen(str1) != strlen(str2))
		return 0;

	while(str1[i] != '\0')
	{
		if(str1[i] != str2[i])
			return 0;
		
		i++;
	}

	return 1;
}

int main()
{
	
	assert(compare("abcd","abcd") == 1);
	assert(compare("abcd","abed") == 1);
	assert(compare("abcd","abdgh") == 1);

	return 0;
}

