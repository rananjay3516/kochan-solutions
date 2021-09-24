/*Function to find a set of bits inside an int*/
#include <stdio.h>
 
int main (void)
 {
 	unsigned int alpha = 2102496 ;
	int bitpat_search (unsigned int num, unsigned int bits, int n) ;		//Funk deck
	int result = bitpat_search (alpha, 7, 3) ;
	if(result != -1)
	 printf("%i\n", result) ;
	else
	 printf ("Pattern not found\n") ;
 }

int bitpat_search (unsigned int num, unsigned int bits, int n)		//Function to find a bit pattern inside an unsigned int
 {
 	int bits_number (void) ;		//Funk deck
	unsigned int buffer ;
	int totalBits = bits_number () ;		//Storing total bits in an int
	int count = 0 ;						//Index to keep track of bits
	while (num != 0)
	 {
	 	buffer = num >> (totalBits - n) ;		//Preserve 'n' highest order bits
		if (buffer ^ bits)						//Check for equality by XORing the buffer and the pattern and checking for result 0
	 	 {
	 		num <<= 1 ;						///If not 0, remove highest order bit from num, increment source index and repeat
			count++ ;
	     }
		else
	 	 return count ;				//If equal i.e. XORing gives 0, return source index to indicate bit where pattern was found
	 }
	return -1 ;
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