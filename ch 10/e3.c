/*Program to count words in a piece of text*/ 

/*Improved with ability to count apostrophe words, 
and positive/negative numbers with embedded commas or periods as a single word*/

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
		bool is_numeric ( char x ) ;
		
		
		for ( int i = 0 ; string [i] != '\0'; i++ )
			{
				if ( is_alpha ( string [i] ) || string [i] == '\'' ) 	//Modified to include an apostrophe like an alpha char
					
					{
						if ( word_hunt )
							{
								count ++ ;
								word_hunt = false ;
							}
					}
				
					
				else if ( is_numeric ( string [i] ) )
					
					{
						count++ ;
						
						while ( is_numeric ( string [i] ) || string [i] == ',' || string [i] == '.' ) 	//Incrementing index until char is neither numeric, comma or a period
							{
								i++ ;
							}
							
						i--;	//Decrementing index to sync it to the last numeric, period or comma char - cause the outer FOR loop increments index 
						
					}
					
					
				else
					word_hunt = true ;
			}
			
		return count ;
		
	}
	
	
//Function to check if char is alphabetic

bool is_alpha ( char x )

	{
		bool cali = false ;
		
		if ( x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z' )
			cali = true ;
			
		return cali ;
			
	}
	
//Function to check if char is numeric

bool is_numeric ( char x )

	{
		bool flag = false ;
		
		if ( x >= '0' && x <= '9' )	
			flag = true ;
			
		return flag ;
		
	}