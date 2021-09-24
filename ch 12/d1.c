/*Interchanging two int values using bitwise XOR*/
#include <stdio.h>

int main (void)
 {
 	int n1 = 56u, n2 = 50u ;
	printf ( "n1 = %i n2 = %i\n", n1, n2 ) ;  
	n1 ^= n2 ;
	n2 ^= n1 ;
	n1 ^= n2 ;
	printf ( "n1 = %i n2 = %i\n", n1, n2 ) ; 
	
	int w1 = 1 ;
	
	w1 = ~w1 ;
	printf ("%i\n", w1) ;
	
	w1 = 21 ;
	w1 &= 1 ;
	printf ("%i\n", w1) ;
	
	w1 = 21 ;
	w1 &= ~1 ;
	printf ("%i\n", w1) ;
 } 