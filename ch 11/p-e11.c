/*Using pointers to sum an array of int*/

#include <stdio.h>

int sum_ints (int *array, const int n)
 {
 	int sum = 0 ;
	int *const arrayEnd = array + n ;
	for ( ; array < arrayEnd; array++ )
	 sum += *array ;
	return sum ;
 }
 
int main (void)
 {
 	int sum_ints (int *array, const int n) ;
	int entries [] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5} ;
	printf ( "The sum is %i\n", sum_ints (entries, 10) ) ;
	return 0 ;
 }