/*MACRO to print int values*/
#include <stdio.h>
//#define printint(x) printf(# x " = %i\n", x) 
#define printx(n) printint(x ## n)

#define printint(n) printf("%i\n", x ## n )

int main (void)
 {
 	int x1 = 20, x2 = 21, x3 = 23, x4 = 24, x5 = 26 ;
	int i = 2 ;
	//printint(i) ;
	printint (3) ;
	return 0 ;
 }
 
/*printx(i)

printint(x##i)
printint(x1)

printf("x1" " = %i\n", x1) */

