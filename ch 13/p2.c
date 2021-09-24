/*Defining pi to calculate area, volume, circumfrence*/
#include "def.h"

int main (void)
 {
	printf ("\aArea = %.4f\n", area (4.98) ) ;
	printf ("Volume = %.4f\n", volume (4.98) ) ;
	printf ("Circumfrence = %.4f\n", circumfrence (4.98) ) ;
	if (LEAP_YEAR (1900))
	 printf ("Leap Year !\n") ;
	else
	 printf ("No Leap Year :(\n") ;
	int x1 = 42 ;
	int x2 = 7 ;
	print(x1) ;
	printx(2) ;
	printf ("INT MAX = %i\n", INT_MAX) ;
	printf ("Unsigned Long Int MAX = %lu\n", ULONG_MAX) ;
	printf ("FLOAT MAX = %f\n", FLT_MAX) ;
	printf ("Float Decimal Prcision points MAX = %i\n", FLT_DIG) ;
	return 0 ;
 }

