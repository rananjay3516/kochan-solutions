/*Typedef pointer to function*/
#include <stdio.h>
int answer (void)
 {
 	return 42 ;
 }

int main (void)
 {
 	int answer () ;		//Funk deck
	typedef int (*FunctionPtr) (void) ;		//Typedef pointer
	FunctionPtr h2g2, adams ;			//Typedef FunctionPtr variables
	h2g2 = answer ;				//Assigning pointer to fn variable to answer ()
	adams = answer ;
	printf("Answer = %i\n", h2g2() ) ; 
	printf("Answer = %i\n", adams() ) ; 
	return 0 ;
 }