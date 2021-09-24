/*Using system library functions*/
#include <stdio.h>
#include <ctype.h>

int main (void)
 {
 	if (isupper ('T') )
	 printf("Upper case\n") ;
	else
	 printf("Lower case\n") ;
	if (isdigit ('!') )
	 printf("Digit\n") ;
	else
	 printf("Non-digit\n") ;
	if (isalpha ('4') )
	 printf("Alphabet char\n") ;
	else
	 printf("Non-alphabet char\n") ;
	return 0 ;
 } 