/*MACRO to shift bits*/
#include <stdio.h>
#define SHIFT(x, n) ( (n) > 0 ? (x) << (n) : (x) >> (-n) )

int main (void)
 {
 	unsigned int alpha = 0177777u, beta = 0444u, x ;
	printf ("%o\n", x = SHIFT(alpha, 5) ) ;
	printf ("%o\n", x = SHIFT(alpha, -6) ) ;
	printf ("%o\n", x = SHIFT(beta, 0) ) ;
	printf ("%o\n", x = SHIFT( ( SHIFT(alpha, -3) ), 3 ) ) ;
	return 0 ; 
 } 