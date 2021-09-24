/*Getting set bits from an int*/
#include <stdio.h>

int main (void)
 {
 	int alpha = ~0 ;
	unsigned int count = 0 ;
	while (alpha)
	 {
	 	count += alpha & 1 ;
		alpha >>= 1 ;
	 }
	printf ("%i\n", count) ;
 }