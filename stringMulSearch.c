/*----------------------------------------------------------------------------------------
Write a function which checks whether a pattern is present in the given sentence. 
If pattern is present, return the starting index.
Modify the previous problem such that pattern may occur at multiple locations. 
Give the starting indices of the pattern.
------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<assert.h>

int searchMulIndex(char* , char* );

int main()
{
	int position;
	char input_str[200],key_str[10];
	
	printf("\nEnter any long string:\n");
	fgets(input_str,200,stdin);
	
	printf("\nEnter the key string to be searched:\n");
	scanf("%s",&key_str);

	position = searchMulIndex(input_str,key_str);
	
	return 0;
}

int searchMulIndex(char i_str[], char k_str[])
{

	int i=0,j=0,lock=0;
	
	while(i_str[i] != '\0')
	{
		while(k_str[j] == i_str[i])
		{
			lock = i-j;
			if(k_str[j+1] == '\0' )
				printf("String found in location %d\n" ,lock+1);

			j++;
			i++;
		}
		j=0;
		i++;
	}
	if(lock == 0)
		printf("%s string not found in %s",k_str,i_str);
	return 0;
}
