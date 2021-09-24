/*Program to compare two strings for equality*/

#include <stdio.h>
#include <stdbool.h>

int main ( void )

	{
		
		//Char string decalaration
		
		const char text1 [] = { "Gandalf" } ;
		const char text2 [] = { "Gandalf the Wizard" } ;
		
		//Function declaration
		
		bool equalStrings ( const char string1 [], const char string2 [] ) ;
		
		//Printing the equality test results using function call
		
		printf ( "%i\n", equalStrings ( text1, text2 ) ) ;
		printf ( "%i\n", equalStrings ( text1, text1 ) ) ;
		printf ( "%i\n", equalStrings ( text2, text2 ) ) ;
		printf ( "%i\n", equalStrings ( text2, "Gandalf the Wizard" ) ) ;
		
		return 0 ;
		
	}
	
//Function to compare two strings for equality

bool equalStrings ( const char string1 [], const char string2 [] )

	{
		
		//Flag to return the result
		
		bool is_equal ;
		
		int i = 0;
		
		//Loop to iterate over chars in both strings until either the chars are different or one of the strings ends
		
		while ( string1 [i] == string2 [i] && string1 [i] != '\0' && string2 [i] != '\0' )
			i++ ;
			
		//Check to establish equality after loop terminates by evaluating reason for termination
		
		if ( string1 [i] == '\0' && string2 [i] == '\0' )   //Only way the strings can be equal is if both the strings reached till null and the null is at the same place
			is_equal = true ;								//in the array
		
		else
			is_equal = false ;
			
		return is_equal ;

	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	