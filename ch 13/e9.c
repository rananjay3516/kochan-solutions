/*MACRO to calculate absoulte value of int*/
#include <stdio.h>
#define AbsValue(x) ( (x) < 0 ? -(x) : (x) )

int main (void)
 {
 	printf("%i\n", AbsValue (-13) ) ;
	printf("%i\n", AbsValue (-13 + 2) ) ;
	printf("%i\n", AbsValue (13) ) ;
	printf("%i\n", AbsValue (-42*13) ) ;
 }