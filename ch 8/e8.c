/*Program to solve a quadratic equation*/

#include <stdio.h>

int main ( void )

	{
		//Function declaration
		void quad_sol ( int a, int b, int c ) ;
		
		int a, b,c ;
		
		//Getting values of a, b and c
		printf( "Enter the values for the quadratic equation\na = " ) ;
		scanf ( "%i", &a) ;
		printf ( "b = " ) ;
		scanf ( "%i", &b) ;
		printf ( "c = " ) ;
		scanf ( "%i", &c) ;
		
		quad_sol ( a, b, c ) ;
		
		return 0 ;
		
	}

//Function to solve a quadratic equation
void quad_sol ( int a, int b, int c )

	{
		
		//Function declaration
		double sqRoot (double x) ;
		
		//Checking the dicriminant 
		int dis = b * b - 4 * a * c ;
		
		//Displaying message if discriminant < 0
		if ( dis < 0 )
			
			{
				printf ( "X1 and X2 are imaginary numbers\n" ) ;
				return ;
			}
			
		//Calculating and printing x1 and x2
		double x1 = ( -b + sqRoot (  b * b - 4 * a * c ) ) / ( 2 * a ) ;
		
		double x2 = ( -b - sqRoot (  b * b - 4 * a * c ) ) / ( 2 * a ) ;
		
		double zero = 0 ;
		printf ( "X1 = %.2f\nX2 = %.2f\n", ( x1 == 0.0 ) ? zero : x1 , ( x2 == 0.0 ) ? zero : x2 ) ;
		
		return ;
		
	}

//Function to calculate sqaure root of a number
double sqRoot ( double x )

	{
		
		//Function declaration
		float absVal ( float x ) ;
		
		//Defining automatic variables for the guess and the epsilon
		double g = 1.0 ; 
		/*Stack overflows if value of e is incremented more than 15 decimal digits - since it would require computation of a number with more than 16 decimal digits */
		double e = 1.0000000001 ;
		
		while ( absVal ( g * g / x ) >= e || g == 1.0 )
			g = (x / g + g) / 2.0 ;
			
		return g ;		
		  
	}
	

//Function to change a real number into its absolute value
float absVal ( float x )

	{	
		
		if ( x < 0 )
			x = -x ;
			
		return x ;
		
	}


