/*Program to store a string in a char array buffer*/

#include <stdio.h>

int main ( void )

	{
		//Function declaration
		void read_line ( char buffer [] ) ;
		
		//Char array declaration
		char store [81] ;
		
		for ( int i = 0; i < 3; i++ )
			
			{
				read_line ( store ) ;
				printf ( "%s\n", store ) ;
			}
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