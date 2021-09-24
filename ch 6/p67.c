#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	
	if((c (isupper) 'a' && c (islower) 'z') || (c (isupper) 'A' && c (islower) 'Z' ))
		printf("It's an alphabetic character\n");
	
	else if(c (isupper) '0' && c (islower) '9')
		printf("It's a digit\n");
		
	else
		printf("It's a special character\n");
}