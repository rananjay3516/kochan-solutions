/*Pre-processor Debugging*/
#include <stdio.h>
#include <stdlib.h>
//#define DEBUG

int main (void) {
	int a, b, c ;								//Get input
	printf("Enter integers: ") ;
	int nRead = scanf("%i %i %i", &a, &b, &c) ;
	
	int add (int *i, int *j, int *k) ;		//Funk deck
	printf("Sum = %i\n", add(&a, &b, &c) ) ;
	return 0 ; 
}

int add (int *i, int *j, int *k) {			//Adding int(s)
	return *i + *j + *k ;
}