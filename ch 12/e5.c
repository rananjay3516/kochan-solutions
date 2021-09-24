/*Determining bit state inside an int and turning it on*/
#include <stdio.h>

int main (void)
 {
 	int bit_test (unsigned int num, int bit) ;		//Funk deck
	int bit_set (unsigned int num, int bit) ;
	unsigned int alpha = 42 ;
	printf ("%i\n", bit_test (alpha, 30) ) ;
	printf ("%i\n", bit_set (alpha, 3) ) ;
 }

int bit_test (unsigned int num, int n)
 {
 	int bits_number (void) ;		//Funk deck
	int total_bits = bits_number () ;		//total bits to represent an int
	num <<= n ;						//Shift right until n is the highest order bit
	num >>= (total_bits - 1) ;		//Shift left until n is the lowest order bit, with every other bit as 0
	if (num == 1)				//Check value of num since it now represents value of just n 
	 return 1 ;
	else if (num == 0)
	 return 0 ;
	else
	 return -1 ;
 } 
 
int bit_set (unsigned int num, int bit)
 {
	int bits_number (void) ;		//Funk deck
	int totalBits = bits_number () ;		//Storing value of total bits in an int
	unsigned int buffer = 1 ;
	buffer <<= (totalBits - bit - 1) ;		//Shifting the sole bit 1 in buffer to correspond to 'n'th bit in num
	num |= buffer ;					//Switching 'n'th bit in num to 1
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
 
 
 
 
 
 
 
 
 
 
 
 
 