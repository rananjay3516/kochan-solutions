/*Program to count number of words in a character string*/

#include <stdio.h>
#include <stdbool.h.>

int main ( void )

	{
		
		//char array declaration
		char yoda [] = { "Rage against the dying of light. DO NOT GO GENTLY INTO THE GOOD NIGHT" } ;
		char h2g2 [] = "Time is an illusion. Lunch time doubly so" ;
		
		//Function declaration
		int word_count ( char string [] ) ;
		
		printf ( "String 1 length = %i\nString 2 length = %i", word_count ( yoda ), word_count ( h2g2 ) ) ;

		return 0 ;
	
	}
	
	
//Function to count number of words in a char string

int word_count ( char string [] )

	{
		
		//Word tracker
		int count = 0 ;
		
		//Flag to check if the loop is looking for a new word
		bool word_hunt = true ;
		
		//Function declaration
		bool is_alpha ( char x ) ;
		
		
		for ( int i = 0; string [i] != '\0'; i++ )
			{
				if ( is_alpha ( string [i] ) )
					{
						if ( word_hunt )
							{
								count ++ ;
								word_hunt = false ;
							}
					}
					
				else
					word_hunt = true ;
			}
			
		return count ;
		
	}
	
	
//Function to check if char is alphabetic

bool is_alpha ( char x )

	{
		
		bool cali ;
		
		if ( x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z' )
			cali = true ;
			
		else
			cali = false ;
			
		return cali ;
			
	}