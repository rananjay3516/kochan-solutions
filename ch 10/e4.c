/*Program to extract a sub-string and place it into a char array*/

#include <stdio.h>

int main ( void )

	{
		
		void substring ( char source [], int start, int count, char result [] ) ;	//Function declaration
		
		char main_text [11] ;
		char sub_text [11] ;
		int start, total_chars ; 
		
		
		printf ( "Enter text: " ) ;		//Ask user for main text input
		scanf ( "%10s", main_text ) ;
		
		printf ( "Enter the character number to start extraction from: " ) ;	//Asking user for the starting char and number of characters to be extracted
		scanf ( "%i", &start ) ;
		
		printf ( "Enter the total characters to extract: " ) ;
		scanf ( "%i", &total_chars ) ;
		
		start -= 1 ;
		
		substring ( main_text, start, total_chars, sub_text ) ;		//Function call - decrement int start to map to the index
		
		printf ( "%s\n", sub_text ) ; 	//Print sub-string
		
		return 0 ;
		
	}
	
//Function to extract and store a sub-string from a string

void substring ( char source [], int start, int count, char result [] )

	{
		
		int i = 0 ;
		
		while ( i < count && source [start] != '\0' )
				
			{
				result [i] = source [start] ;
				start++ ;
				i++ ;	
			}
				
		result [i] = '\0' ; 	//Appending null char at the end of the sub-string
	
	}