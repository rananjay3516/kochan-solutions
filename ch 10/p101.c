/*Program to concatenate two strings*/

#include <stdio.h>

int main ( void )

	{
		
		//Function declaration
		void concat ( char result [], const char string1 [], int n1, const char string2 [], int n2 ) ;
		
		//Array of char declaration
		char final [20] ;
		 
		const char line1 [6] = { 'R', 'a', 'b', 'b', 'i', 't' } ;
		
		const char line2 [5] = { ' ', 'H', 'o', 'l', 'e' } ;
		
		//Function call 
		concat ( final, line1, 6, line2, 5 ) ;
		
		//Printing the concatenated string
		for ( int i = 0; i < 11; i++ )
			printf ( "%c", final [i] ) ;
			
		return 0 ;

	}
	
	
//Function to concatenate two strings

void concat ( char result [], const char string1 [], int n1, const char string2 [], int n2 )

	{
		
		//Copying string1 to result
		for ( int i = 0; i < n1; i++ )
			result [i] = string1 [i] ;

		//Copying string2 to result 
		for ( int j = 0; j < n2; j++ )
			result [n1 + j] = string2 [j] ;
			
	}

