/*-----------------------------------------------------------------------
6. Check whether the string is a palindrome  or not.
-------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<assert.h>

int palindrome(char str[])
{
	int i,len;

	len = strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i] != str[len-i-1])
			return 0;
	}
	return 1;	
}

int main()
{
	assert(palindrome("malayalam") == 1);
	assert(palindrome("Chaitanya") == 1);
	assert(palindrome("hellolleh") == 1);

	return 0;
}