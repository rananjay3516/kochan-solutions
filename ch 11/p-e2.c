/*Pointer to a char*/

#include <stdio.h>

int main (void)

 {
 	char alpha, *beta = &alpha ;
	
	alpha = 'i' ;
	printf ( "%c %c\n", alpha, *beta ) ;
	alpha = '{' ;
	printf ( "%c %c\n", alpha, *beta ) ;
	*beta = '4' ;
	printf ( "%c %c\n", alpha, *beta ) ;
	return 0 ;
 }