/*Determining whether system performs arithmetic or logical right shift*/
#include <stdio.h>

int main (void)
 {
 	int n = -189 ;
	n >>= 1 ;		//Shift right by 1
	printf ("%i\n", n) ;		
	if (n<0)
	 printf ("System performs Arithmetic right shift\n") ;
	else
	 printf ("System performs Logical right shift\n") ;
 }