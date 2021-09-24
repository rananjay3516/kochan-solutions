/*Program to concatenate variable length char strings*/

#include <stdio.h>

int main ( void )

	{
		
		//Function declaration
		void concat ( char result [], const char string1 [], const char string2 [] ) ;
		
		//String declaration
		char final [20] ;
		const char line1 [] = { "Sirius " } ;
		const char line2 [] = { "Black" } ;
		
		//Function call
		concat ( final, line1, line2 ) ;
		
		printf ( "%s\n", final ) ;
		
		return 0 ;
		
	}
	
//Function to concatenate

void concat ( char result [], const char string1 [], const char string2 [] )

	{
		
		//Variable to keep track of result index
		int i, j;
		
		//Copying string1 to result
		for ( i = 0; string1 [i] != '\0'; i++ )
			result [i] = string1 [i] ;
			
		//Copying string2 to result
		for ( j = 0; string2 [j] != '\0'; j++ )
			result [i + j] = string2 [j] ;
		
		//Insterting null char at the end of concatenated string
		result [i + j] = '\0' ;
		
	}