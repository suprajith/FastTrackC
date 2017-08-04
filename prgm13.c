#include <stdio.h>
int main()
{
    int n, reversedInt = 0, remainder, integer;

    printf("Enter an integer: ");
    scanf("%d", &n);

    integer = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInt = reversedInt*10 + remainder;
        n /= 10;
    }

    // palindrome if given integer and reversed integer are equal
    if (integer == reversedInt)
        printf("%d is a palindrome.", integer);
    else
        printf("%d is not a palindrome.", integer);
    
    return 0;
}