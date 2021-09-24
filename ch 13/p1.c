/*Using #define statements*/
#include <stdio.h>
#define YES 1
#define NO 0

int main (void)
 {
 	int check_even (int n) ;
	int alpha = 45;
	if( check_even(alpha) == YES )
	 printf("%i is even\n", alpha) ;
	else if ( check_even(alpha) == NO )
	 printf("%i is odd\n", alpha) ;
	return 0 ;
 }
 
int check_even (int n)
 {
 	if(n % 2 == 0)
	 return YES ;
	else
	 return NO ;
 }