/*Calculating number of bits used to represent an int on the system*/
#include <stdio.h>

int main (void)
 {
 	int n = ~0, bits = 0 ;
	while (n != 0)
	 {
	 	n <<= 1 ;
		bits++ ;
	 }
	printf ("%i\n", bits) ;
 }