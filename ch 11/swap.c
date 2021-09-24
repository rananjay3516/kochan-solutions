#include <stdio.h>

int main (void)
 {
 	void swap (int *a, int *b) ;
	int cos = 67, sine = 314 ;
	printf( "%i, %i\n", cos, sine) ;
	swap(&cos, &sine) ;
	printf( "%i, %i\n", cos, sine) ;
 }
 
void swap (int *a, int *b)
 {
 	int temp ;
	temp = *a ;
	*a = *b ;
	*b = temp ;
 }