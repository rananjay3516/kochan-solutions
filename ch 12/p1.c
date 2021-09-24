/*Testing bitwise AND operator*/

#include <stdio.h>

int main (void)
 {
 	unsigned int w1 = 077u, w2 = 0150u, w3 = 0210u ;
	printf ("%o ", w1 & w2) ; 
	printf ("%o ", w1 & w1) ;
	printf ("%o ", w1 & w2 & w3) ;
	printf ("%o ", w1 & 1);
	printf ("\n") ;    
 }