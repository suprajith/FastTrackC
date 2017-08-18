/* -----------------------------------------------------------------------------------------------
6. Implement your own string handling functions like string-length, string-copy, 
string-copy-nchars, string-concatenate 
--------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main()
{
	int n;
	char string1[50],string2[50];

	printf("Enter source and destination string: ");
	scanf("%s%s",&string1,&string2);

	stringLength(string1);
	stringLength(string2);

	stringCopy(string1,string2);
	stringConcatenate(string1,string2);
	
	printf("\nEnter the number of characters to be copied from %s to %s: ",string2,string1);
	scanf("%d",&n);
	stringNCopy(string1,string2,n);


	return 0;
}

int stringLength(char str[])
{
	int strlen=1;

	while(str[strlen] != '\0')
		strlen++;

	printf("\nThe string length of %s is %d.",str,strlen);
	return strlen;
}
void stringCopy(char sstr[],char dstr[])
{
	int i=0;
	printf("\nBefore copying:\nSource string: %s\t Destination string: %s",sstr,dstr);
	while(sstr[i] != '\0')
	{	
		dstr[i] = sstr[i];
		i++;
	}
	dstr[i] = '\0';
	printf("\nAfter copying:\nSource string: %s\t Destination string: %s",sstr,dstr);
	
}
void stringConcatenate(char str1[], char str2[])
{
	int i,j=0;
	printf("\n%s , %s\n",str1,str2);
	for(i=0;str1[i]!='\0';i++){}
		
	for(i ;str2[j]!='\0';i++)
	{
		str1[i] = str2[j];
		j++;
	}
	str1[i]='\0';
	printf("\nConcatenated string is :%s\n",str1);
}
int stringNCopy(char sstr[],char dstr[],int len)
{
	int i=0;
	printf("\nBefore copying %d chars:\nSource string: %s\t Destination string: %s",len,sstr,dstr);
	while(i<len)
	{	
		dstr[i] = sstr[i];
		i++;
	}
	dstr[i] = '\0';
	printf("\nAfter copying %d chars:\nSource string: %s\t Destination string: %s\n",len,sstr,dstr);
	return 0;
}
