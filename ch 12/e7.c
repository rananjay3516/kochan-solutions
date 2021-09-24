/*Extracting specified bits from an int*//*Function to find a set of bits inside an int*/
#include <stdio.h>
 
int main (void)
 {
	int bitpat_get (unsigned int num, int bitIndex, int n) ; 		//Funk deck
	unsigned int alpha = 9437280 ;
	unsigned int result = bitpat_get (alpha, 8, 24) ;
	if (result != -1)
	 printf ("%i\n", result) ;
	else
	 printf ("Function arguments exceed number of bits\n")  ;
 }

int bitpat_get (unsigned int num, int bitIndex, int n)		//Function to extract a bit pattern from an unsigned int
 {
 	int bits_number (void) ;		//Funk deck
	int totalBits = bits_number () ;		//Storing total number of bits in an int
	if (bitIndex + n > totalBits)		//If bits to be extracted exceed the bits in the int 
	 return -1 ;
	num <<= bitIndex ;
	num >>= totalBits - n ;
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