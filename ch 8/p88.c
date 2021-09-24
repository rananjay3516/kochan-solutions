/*Calculating square roots*/

#include <stdio.h>

//Function to change a real number into its absolute value
float absVal (float x)
	{	
		if (x < 0)
			x = -x ;
			
		return x ;
	}

//Function to calculate the sqaure root	
float sqRoot (double x)
	{
		//Defining automatic variables for the guess and the epsilon
		double g = 1.0 ; 
		/*Stack overflows if value of e is incremented more than 15 decimal digits - since it would require computation of a number with more than 16 decimal digits */
		double e = 1.000000000000001 ;
		printf ( "Guess = %f\n", g ) ;
		
		while ( absVal ( g * g / x ) >= e || g == 1.0 )
			{
				g = (x / g + g) / 2.0 ;
				printf ( "Guess = %f\n", g ) ;
			}
			
			
		return g ;		  
	}
	
int main (void)
	{
		printf( "Square root (2.0) = %f\n", sqRoot ( 2.0 ) ) ;
		printf( "Square root (144.0) = %f\n", sqRoot ( 144.0 ) ) ;
		printf( "Square root (17.5) = %f\n", sqRoot ( 17.5 ) ) ;
		
		return 0 ;
	}