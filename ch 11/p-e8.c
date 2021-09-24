/*Pointers as argument to function*/

#include <stdio.h>

void change (int *alpha)
 {
 	*alpha = 100 ;
 }
 
int main (void)
 {
 	void change (int *alpha) ;		//Function declaration
	int i = 25, *ptr = &i ;
	printf ( "Before fn - %i\n", i ) ;
	change (ptr) ;
	printf ( "After fn - %i\n", i ) ;
	return 0 ;
 }