/*Setting bits inside an unsigned int to specific bit pattern*/
#include <stdio.h>

int main (void)
 {
 	unsigned int bitpat_set (unsigned int *num, const unsigned int bits, const int index, const int length ) ;		//Funk deck
	unsigned int alpha = 52897 ;
	unsigned int result = bitpat_set (&alpha, 5, 9, 3) ;
	if (result == -1)
	 printf ("Index and length arguments exceed int bit size\n") ;
	else
	 printf ("%i\n", result) ;
	return 0 ;
 }

unsigned int bitpat_set (unsigned int *num, const unsigned int bits, const int index, const int length )
 {
 	unsigned int rotate (unsigned int value, int n) ;
	int bits_number (void) ;		//Funk deck
	const int totalBits = bits_number () ;		//Storing total bits used to represent an int on system
	if (index + length > totalBits)			//If index and bits argument exceed number of bits in an int
	 return -1 ;
	unsigned int buffer = *num ;
	buffer = rotate (buffer, -(totalBits - (index + length) ) ) ;		//Right rotate bits on the right after bits to be replaced
	buffer >>= length ;				//Push out the bits to be replaced
	buffer <<= length ;				//Push in 0's corresponding to bits to be replaced
	buffer |= bits ;				//OR buffer with new bits to place them in corresponding places
	buffer = rotate (buffer, totalBits - (index + length) ) ;			//Undo the rotation to place bits back in original positions
	return buffer ;
 }

unsigned int rotate (unsigned int value, int n)
 {
 	unsigned int result, bits ;
	
	if (n > 0)
	 n = n % 32 ;
	else
	 n = -(-n % 32) ;
	if (n == 0)
	 result = value ;
	else if (n > 0)
	 {
	 	bits = value >> (32 - n) ;
	 	result = value << n | bits ;
	 }
	else
	 {
	 	n = -n ;
		bits = value << (32 -n) ;
		result = value >> n | bits ;
	 }
	return result ;
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