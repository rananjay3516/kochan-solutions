/*MACRO to test if char is alphabetic*/
#include <stdio.h>
#define IsUpper(x) ( (x) >= 'A' && (x) <= 'Z' )
#define IsLower(x) ( (x) >= 'a' && (x) <= 'z' )
#define IsAlpha(x) ( IsUpper(x) || IsLower(x) ? 1 : 0 )

int main (void)
 {
 	char alpha = 'T', beta = '8', gamma = '(', omega = 'o' ;
	if ( IsAlpha('T') )
	 printf("Alphabetic char\n") ;
	else
	 printf("Non-alphabetic char\n") ;
	if ( IsAlpha('8') )
	 printf("Alphabetic char\n") ;
	else
	 printf("Non-alphabetic char\n") ;
	if ( IsAlpha(gamma) )
	 printf("Alphabetic char\n") ;
	else
	 printf("Non-alphabetic char\n") ;
	if ( IsAlpha(omega) )
	 printf("Alphabetic char\n") ;
	else
	 printf("Non-alphabetic char\n") ;
	return 0 ;
 }