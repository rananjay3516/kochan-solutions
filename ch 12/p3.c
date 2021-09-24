/*shift count function using +ve and -ve arguments*/
#include <stdio.h>

int main (void)
 {
 	int shift (int num, int i) ;		//Function declaration
	unsigned int w1 = 0177777u, w2 = 0444u ;
	printf ("%o\t%o\n", shift(w1, 5), w1 << 5 ) ;
	printf ("%o\t%o\n", shift(w1, -6), w1 >> 6 ) ;
	printf ("%o\t%o\n", shift(w2, 0), w2 >> 0 ) ;
	printf ("%o\n", shift(shift (w1, -3), 3) ) ;
	return 0 ;
 } 
 
int shift (int num, int i)		//Function to shift num, by i places, to the left if i is +ve or the right if i is -ve
 {
 	if (i < 0)			//Ensuring i is less than 32
	 i = -(-i % 64) ;
	else
	 i = i % 64 ;
	 
	if (i > 0)			//Shifting 
	 num <<= i ;
	else if (i < 0)
	 num >>= -i ;
	
	return num ; 
 }