#include <stdio.h>

int main ( void )

	{
		
		int score [ 3 ] [ 5 ] = { 
								{ 7, 16, 55, 13, 12 } ,
							  	{ 12, 10, 52, 0, 7 } , 
							  	{ -2, 1, 2, 4, 9 } ,
							} ;
		
		void scalarMultiply ( int values [3] [5], int n ) ;
		void displayMatrix ( int values [3] [5] ) ;
		
		printf( "ORIGINAL MATRIX\n" ) ;
		displayMatrix ( score ) ;
		printf( "\n" ) ;
		
		printf( "MULTIPLIED BY 2:\n" ) ;
		scalarMultiply ( score, 2 ) ;
		displayMatrix ( score ) ;
		printf( "\n" ) ;
		
		printf( "THEN MULTIPLIED BY -1:\n" ) ;
		scalarMultiply ( score, -1 ) ;
		displayMatrix ( score ) ;
		printf( "\n" ) ;
		
		return 0;
	
	}
	
	
//Function to multiply a 3 x 5 array by a scalar
void scalarMultiply ( int values [3] [5], int n )

	{
	
		for ( int r = 0; r < 3; r++ )
			{
				for ( int c = 0; c < 5; c++ )
					values [r] [c] *= n ;
			}
			
	}
	
	
//Function to display a 3 x 5 array 	
void displayMatrix ( int values [3] [5] )

	{
		
		for ( int r = 0; r < 3; r++ )
			{
				for ( int c = 0; c < 5; c++ )
					printf( "%4i ", values [r] [c] ) ;
					 
				printf( "\n" ) ;
			}
			
	}
	
