/*Calculating string length using pointer subtraction*/

#include <stdio.h>

int str_len (char *string)
 {
 	char * const ptr = string ;
	while (*string)
	 string++ ;
	return string - ptr ;
 }
 
int main (void)
 {
 	int str_len (char *string) ;		//Function declaration
	printf ( "Length = %i\n", str_len ("The day to win this has arrived.") ) ;
	return 0 ;
 }