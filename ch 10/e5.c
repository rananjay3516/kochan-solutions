/*Program to find a char string inside another char string*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main ( void )

	{
		int findString ( char main_text [], char sub_text [] ) ; 	//Function declaration
		
		int index = findString ( "a chatterbox", "hat" ) ;
		
		printf ( "%i\n", index ) ;
		
		return 0 ;
		
	}
	
//Function to test if a sub string exists inside main string
//If it does, returns index number from where it starts, else returns -1

int findString ( char main_text [], char sub_text [] )

	{
		
		int m = 0 ;		//Index variable for main text
		char tester [21] ; 	//Buffer to test string equality
		
		int sub_length = strlen ( sub_text ) ;		//Storing length of sub string
		
		void substring ( char source [], int start, int count, char result [] ) ;		//Function declarations
		bool equalStrings ( char string1 [], char string2 [] ) ;
		
		
		
		while ( main_text [m] != '\0' )
			
			{
				
				if ( main_text [m] == sub_text [0] )
				
					{
						substring ( main_text, m, sub_length, tester ) ;		//Storing sub string equivalent length buffer from main string
						
						if ( equalStrings ( tester, sub_text ) )		//Checking buffer and sub string for equality
							return m ;
					}
					
				
				m++ ;
					
			}
	
		return -1 ;		//If sub string not found in main string											
		
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
	

//Function to compare two strings for equality

bool equalStrings ( char string1 [], char string2 [] )

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