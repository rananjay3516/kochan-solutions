/*Pointer to an int variable*/

#include <stdio.h>

int main (void)
 
 {
 	int count = 42, x, *arthur ;
	arthur = &count ;
	x = *arthur ;
	printf ( "count = %i x = %i\n", count, x ) ;
	return 0 ;
 }