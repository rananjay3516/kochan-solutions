/*MACRO to get minimum of two values*/
#include <stdio.h>
#define MIN(x,y) ( (x) < (y) ? (x) : (y) )

int main (void)
 {
 	int alpha = 46, beta = 8 ;
	printf ("%i\n", MIN(alpha, beta) ) ;
	return 0 ;
 }