/*Program to sort an array*/

#include <stdio.h>

//Global array
int scores [ 16 ] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 } ;


//Function to sort an array in ascending order
void sort_asc ( int a_or_d )

	{
		//Sorting in ascending order
		if ( a_or_d == 0 )
			{
				for ( int i = 0; i < 16 - 1; i++ )
					{
						for ( int j = i + 1; j < 16; j++ )
							{	
								if ( scores [ j ] < scores [ i ] )
									{
										int temp = scores [ i ] ;
										scores [ i ] = scores [ j ] ;
										scores [ j ] = temp ;
									}
											
							}	
					}
			}
		
		//Sorting in descending order
		else if ( a_or_d == 1 )
			{
				for ( int i = 0; i < 16 - 1; i++ )
					{
						for ( int j = i + 1; j < 16; j++ )
							{	
								if ( scores [ i ] < scores [ j ] )
									{
										int temp = scores [ i ] ;
										scores [ i ] = scores [ j ] ;
										scores [ j ] = temp ;
									}
											
							}	
					}
			}
			
		else
			printf ( "Incorrect parameter\n" ) ;
		
			
	}
	
int main ( void )

	{
		
		//Function declaration
		void sort_asc ( int a_or_d );
		
		
		//printing original array
		printf( "THE ARRAY BEFORE SORTING\n" ) ;
		for ( int i = 0; i < 16; i++ )
			printf( "%i ", scores [ i ] ) ;
		
		printf( "\n" ) ;
		
		//Sort function call
		sort_asc ( 0 ) ;
		
		//Printing array after sorting
		printf( "THE ARRAY AFTER SORTING\n" ) ;
		for ( int i = 0; i < 16; i++ )
			printf( "%i ", scores [ i ] ) ;
			
		printf( "\n" ) ;
		
		return 0;
		
	}