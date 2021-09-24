/*Program to count words in a piece of text*/

#include <stdio.h>
#include <stdbool.h>

int main ( void )

	{
		
		//Function declaration
		void read_line ( char buffer [] ) ;
		int word_count ( char string [] ) ;
		
		int word_tracker = 0 ;
		
		//Char array declaration
		char text_line [81] ;
		
		printf ( "Enter text here\n" ) ;
		
		//Loop to count words until a null string is reached
			do
				{
					read_line ( text_line ) ;							//Store a line in the buffer
											
					word_tracker += word_count ( text_line ) ;			//Count words in the buffer
				}
			while ( text_line [0] != '\0' ) ;
		
		//Printing total word count of all the strings	
		printf ( "Word count = %i\n", word_tracker ) ;
			
		return 0 ;
	}


//Function to store an input text in a char array using getchar

void read_line ( char buffer [] )

	{
		
		char character ;
		int i = 0 ;
		
		//Loop to take input using getchar and store it in the buffer
		
		do
		{
			character = getchar () ;
			buffer [i] = character ;
			i++ ;
		}
		while ( character != '\n' ) ;
		
		buffer [i - 1] = '\0' ;
		
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