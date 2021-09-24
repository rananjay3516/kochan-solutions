/*MACRO to test if char is upper case*/
#include <stdio.h>
#define IsUpper(x) (x >= 'A' && x <= 'Z' ? 1 : 0)

int main (void)
 {
 	char alpha = 'X', beta = 'x' ;
	if ( IsUpper(alpha) )		//testing alpha
	 printf("Upper case\n") ;
	else
	 printf("Not upper case\n") ;
	if ( IsUpper(beta) )		//testing beta
	 printf("Upper case\n") ;
	else
	 printf("Not upper case\n") ;
	return 0 ;
 }