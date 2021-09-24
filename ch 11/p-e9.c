/*Exhanging values of int using pointers as function arguments*/

#include <stdio.h>

void exchange ( int *const p1, int *const p2 )
 {
 	int temp = *p1 ;
	*p1 = *p2 ;
	*p2 = temp ;
 }
 
int main (void)
 {
 	void exchange ( int *const p1, int *const p2 ) ;				//Function declaration
	int i1 = 42, i2 = 3, *ptr1 = &i1, *ptr2 = &i2 ;		//Variables and pointers
	printf ( "i1 = %i i2 = %i\n", i1, i2 ) ;				//Before exchange
	exchange ( ptr1, ptr2 ) ;							//Exchange
	printf ( "i1 = %i i2 = %i\n", i1, i2 ) ; 				//After exchange
	exchange ( &i1, &i2 ) ;								//Exchange back
	printf ( "i1 = %i i2 = %i\n", i1, i2 ) ; 				//After exchange back
	return 0 ;
 }