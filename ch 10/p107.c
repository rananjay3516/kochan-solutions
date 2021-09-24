/*Program to count number of words in a character string*/

#include <stdio.h>

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
		
		//Variables to track word count and index
		int word_flag = 0, i = 0 ;
		
		while ( string [i] != '\0' )
			{
				if ( string [i] >= 'a' && string [i] <= 'z' || string [i] >= 'A' && string [i] <= 'Z' )    //If alphabetic char
					{
						word_flag += 1 ; 	//Increase word count
						i++ ; 				//Increment index 
						
						//Increment index for every contiguous alphabetic char
						while ( string [i] >= 'a' && string [i] <= 'z' || string [i] >= 'A' && string [i] <= 'Z' )
							{
								i++ ;
							}
					}
				
				//Increment index if non-alphabetic char	
				else
					i++ ;
			}
		
		//Return word count when string reaches null char	
		return word_flag ;
		
	}