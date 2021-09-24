/*MACRO to get maximum of three values*/
#include <stdio.h>
#define MAX(x,y,z) (x) > (y) ? ( (x) > (z) ? (x) : (z) ) : ( (y) > (z) ? (y) : (z) )

int main (void)
 {
 	int alpha = 46, beta = 8 ;
	printf ("%i\n", MAX(alpha, beta, 49) ) ;
	return 0 ;
 }