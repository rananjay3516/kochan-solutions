/*Structure containing pointers*/

#include <stdio.h>

struct gladys
 {
 	int *p1 ;
	int *p2 ;
 } ;
 
int main (void)

{
	int i1 = 50, i2 ;
	struct gladys year ;
	year.p1 = &i1 ;
	year.p2 = &i2 ;
	*year.p2 = 25 ;
	printf ( "i1 = %i, p1 = %i, i2 = %i, p2 = %i", i1, *year.p1, i2, *year.p2 ) ;
	return 0 ;
}