/*Copying strings using pointers*/

#include <stdio.h>

void copy_string (char *source, char *destination)
 {
 	while (*source)
	 *destination++ = *source++ ;
	*destination = '\0' ;
 }

int main (void)
 {
 	char alpha [] = "Meeseeks and Destroy" ;
	char beta [40] ;
	void copy_string (char *source, char *destination) ;		//Function declaration
	copy_string (alpha, beta) ;
	printf ( "%s\n", beta ) ;
	copy_string ( "The Ricks must be crazy", beta ) ;
	printf ( "%s\n", beta ) ;
	return 0 ;
 }