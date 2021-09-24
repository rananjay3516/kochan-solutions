/*Rotating bits*/
#include <stdio.h>

int main (void)
 {
 	unsigned int rotate (unsigned int num, int i) ;		//Funk deck
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u ;
	printf ("%x\n", rotate (w1, 8) ) ;
	printf ("%x\n", rotate (w1, -16) ) ;
	printf ("%x\n", rotate (w2, 4) ) ;
	printf ("%x\n", rotate (w2, -2) ) ;
	printf ("%x\n", rotate (w1, 0) ) ;
	printf ("%x\n", rotate (w1, 44) ) ;
 }
 
unsigned int rotate (unsigned int num, int i)
 {
 	int bits_number (void) ;		//Funk deck
	int bits ;
	int bits_int = bits_number () ;		//Storing number of bits used to represent an int on the system 
	if (i < 0)			//Scaling down i to less than 64
	 i = -(-i % bits_int) ;
	else
	 i = i % bits_int ;
	if (i > 0)		//Left rotate
	 {
	 	bits = num >> (bits_int-i) ;		//Store bits to be pushed out in buffer
		num = num << i | bits ;		//Remove bits to be pushed out from the number and replace i number of 0's in the low order bits by the bits in buffer
	 }
	else if (i < 0)		//Right rotate
	 {
	 	bits = num << (bits_int-i) ;
		num = num >> i | bits ;
	 }
	return num ;
 }
 
int bits_number (void)			//Function to calculate number of bits used to represent an int on the system
 {
 	int n = ~0, bits = 0 ;
	while (n != 0)
	 {
	 	n <<= 1 ;
		bits++ ;
	 }
	return bits ;
 }