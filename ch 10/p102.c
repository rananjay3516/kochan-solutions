/*Program to count string length*/

#include <stdio.h>

int main ( void )

	{
		
		//Function declaration
		int stringlen ( const char tester [] ) ;
		
		//Defining const char string
		const char word1 [] = { 'S', 'i', 'r', 'i', 'u', 's', '\0' } ;
		
		const char word2 [] = { 'A', 's', 't', 'e', 'r', '\0' } ;
		
		//Printing string length using function call 
		printf ( "Word 1 = %i\nWord 2 = %i", stringlen ( word1 ), stringlen ( word2 ) ) ;
		
		return 0;
		
	}
	
//Function to count string length

int stringlen ( const char tester [] )

	{
		//Variable to keep char count
		int c = 0 ;
		
		//Loop to count chars up till null
		while ( tester [c] != '\0' )
			c ++ ;
			
		return c ;
		
	}
	
