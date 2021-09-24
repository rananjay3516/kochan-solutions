/*Program to transpose a 4 x 5 matrix into a 5 x 4 matrix*/

#include <stdio.h>

//Global arrays

//Array 1
int obi [4] [5] = { { 2, 5, 7, 9, 4 }, { 6, 4, 5, 2, 9 }, { 7, 3, 5, 4, 8 }, { 4, 8, 2, 3, 1 } } ;
		
//Array 2
int yoda [5] [4] ; 
	
		
//Function to transpose a 4 x 5 matrix into a 5 x 4 matrix
void transposeMatrix ( void )

	{
		
		for ( int i = 0; i < 5; i++ )
			for ( int j = 0; j < 4; j++ )
				yoda [i] [j] = obi [j] [i] ;	
						
	}
	
int main ( void )

	{
		
		//Function declaration
		void transposeMatrix ( void ) ;
		
		
		//Calling function					
		transposeMatrix ( ) ;
		
		//Printing Array 1
		printf ( "Obi\n" ) ;
		for ( int i = 0; i < 4; i++ )
			
			{
				for ( int j = 0; j < 5; j++ )
					printf ( "%i  ", obi [i] [j] ) ;
					
				printf ( "\n" ) ;
			}	
		
		//Printing tarnsposed Array 2
		printf ( "\nYoda\n" ) ;
		for ( int i = 0; i < 5; i++ )
			
			{
				for ( int j = 0; j < 4; j++ )
					printf ( "%i  ", yoda [i] [j] ) ;
					
				printf ( "\n" ) ;
			}	
			
		return 0 ;	
				 
	}