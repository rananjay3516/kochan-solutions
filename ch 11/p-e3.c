/*Arithmetic expressions using pointers*/

#include <stdio.h>

int main (void)

 {
 	int i1, i2, *p1, *p2 ;
	
	i1 = 10 ;
	p1 = &i1 ;
	i2 = *p1 / 4 + 4 ;
	p2 = p1 ;
	printf ( "i1 = %i i2 = %i p1 = %i, p2 = %i", i1, i2, *p1, *p2 ) ;
	return 0 ;
 }