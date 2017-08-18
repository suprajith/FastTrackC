/*----------------------------------------------------------------------------------------
4. Write a function which checks whether a pattern is present in the given sentence. 
If pattern is present, return the starting index.
------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<assert.h>

int searchIndex(char* , char* );

int main()
{
	int position;
	char input_str[200],key_str[10];
	
	printf("\nEnter any long string:\n");
	fgets(input_str,200,stdin);
	
	printf("\nEnter the key string to be searched:\n");
	scanf("%s",&key_str);

	position = searchIndex(input_str,key_str);
	
	if(position != 0)
		printf("String is found at position %d.",position);
	else
		printf("%s string not found in %s",key_str,input_str);

	assert(searchIndex("computer","ter") == 6);

	assert(searchIndex("chaitanya","yo") == 8);

	return 0;
}

int searchIndex(char i_str[], char k_str[])
{

	int i=0,j=0,lock=0;
	
	while(i_str[i] != '\0')
	{
		while(k_str[j] == i_str[i])
		{
			lock = i-j;
			if(k_str[j+1] == '\0' )
				return lock+1;

			j++;
			i++;
		}
		j=0;
		i++;
	}
	return 0;
}
