/*Sorting three ints into ascending order*/

#include <stdio.h>

int main (void)
 {
	void sort_asc (int *a, int *b, int *c) ;
	int i = 7, j = 42, k = -3 ;
	sort_asc (&i, &j, &k) ;
	printf ("%i<%i<%i\n", i, j, k) ;
	return 0 ;
 }

void sort_asc (int *a, int *b, int *c)
 {
 	void swap (int *a, int *b) ;
	if (*a > *b)
	 swap (a, b) ;
	if (*a > *c)
	 swap (a, c) ;
	if (*b > *c)
	 swap (b, c) ;
 }
 
void swap (int *a, int *b)
 {
 	int temp ;
	temp = *a ;
	*a = *b ;
	*b = temp ;
 }