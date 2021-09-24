/*Program to calculate an integer raised to a positive integer power*/

#include <stdio.h>

//Function to calculate the result of raising an integer to a non-negative power
long int x_to_the_n ( int x, int n )

	{
		
		long int yoda = 1 ;
		
		if ( n < 0 )
			{
				printf ( "Invalid power\n" ) ;
				return 1 ;
			}
		
		for ( int i = 0; i < n; i++ )
			yoda *= x ;
		
		return yoda ;
	
	}
	
int main ( void )
	
	{
		
		long int x_to_the_n ( int x, int n ) ;
		
		printf ( "%li\n", x_to_the_n ( 5, 6 ) ) ;
		printf ( "%li\n", x_to_the_n ( 5, 0 ) ) ;
		printf ( "%li\n", x_to_the_n ( 7, 1 ) ) ;
		printf ( "%li\n", x_to_the_n ( 5, -6 ) ) ;
		
		return 0;
		
	}