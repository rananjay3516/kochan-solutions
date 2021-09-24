/*Testing char for special chars*/
#include "charHeader.h"

int main (void)
 {
 	if ( IsSpecial('!') )
	 printf("Special char\n") ;
	else
	 printf("Not special char\n") ;
	char theta = '9' ;
	if ( IsSpecial(theta) )
	 printf("Special char\n") ;
	else
	 printf("Not special char\n") ;
	if ( IsSpecial('a') )
	 printf("Special char\n") ;
	else
	 printf("Not special char\n") ;
	return 0 ;
 }