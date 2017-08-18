/*--------------------------------------------------------------------------------------------
Write a function that splits the full name store in one array into first-name, 
middle-name and last-name. Names are separated by blank spaces.
----------------------------------------------------------------------------------------------*/

#include<stdio.h>
int separateNames(char[]);
int main()
{
	char name[100];

	printf("Enter the full name: ");
	fgets(name,100,stdin);

	separateNames(name);
	return 0;
}

int separateNames(char name[])
{
	char firstName[50], middleName[50], lastName[50];
	int i = 0,j = 0;

	while(name[i] != ' ')
	{
		firstName[j] = name[i];		
		i++;
		j++;
	}
	firstName[i] = '\0';
	j = 0;
	i++;

	while(name[i] != ' ')
	{
		middleName[j] = name[i];		
		i++;
		j++;
	}
	middleName[i] = '\0';
	j = 0;
	i++;

	while(name[i] != '\0')
	{
		lastName[j] = name[i];		
		i++;
		j++;
	}
	lastName[i] = '\0';
	j = 0;
	i++;
	printf("First name is : %s\nmiddle name is : %s\nlast name is : %s\n",firstName,middleName,lastName);
	return 0;
}
