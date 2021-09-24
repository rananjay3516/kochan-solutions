#include <stdio.h>

int main ( void )

	{
		
		int score [ 3 ] [ 5 ] = { 
								{ 7, 16, 55, 13, 12 } ,
							  	{ 12, 10, 52, 0, 7 } , 
							  	{ -2, 1, 2, 4, 9 } ,
							} ;
		
		void scalarMultiply ( int row, int column, int values [row] [column], int n ) ;
		void displayMatrix ( int row, int column, int values [row] [column] ) ;
		
		printf( "ORIGINAL MATRIX\n" ) ;
		displayMatrix ( 3, 5, score ) ;
		printf( "\n" ) ;
		
		printf( "MULTIPLIED BY 2:\n" ) ;
		scalarMultiply ( 3, 5, score, 2 ) ;
		displayMatrix ( 3, 5, score ) ;
		printf( "\n" ) ;
		
		printf( "THEN MULTIPLIED BY -1:\n" ) ;
		scalarMultiply ( 3, 5, score, -1 ) ;
		displayMatrix ( 3, 5, score ) ;
		printf( "\n" ) ;
		
		return 0;
	
	}
	
	
//Function to multiply a variable length array by a scalar	
void scalarMultiply ( int row, int column, int values [row] [column], int n )

	{
	
		for ( int r = 0; r < row; r++ )
			{
				for ( int c = 0; c < column; c++ )
					values [r] [c] *= n ;
			}
			
	}
	
	
//Function to display a variable length array 	
void displayMatrix ( int row, int column, int values [row] [column] )

	{
		
		for ( int r = 0; r < row; r++ )
			{
				for ( int c = 0; c < column; c++ )
					printf( "%4i ", values [r] [c] ) ;
					 
				printf( "\n" ) ;
			}
			
	}
	
