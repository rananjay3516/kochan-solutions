/*Program to find and replace sub string inside a main string*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (void)

 {
 	char pass [] = "Caput Draconis" ;
	int search_destroy ( char source [], char find [], char replace [] ) ; 	//Function declaration
	int result = search_destroy ( pass, "Draco", "Brade" ) ;
	if ( result != -1 ) 
	 printf ( "%s\n", pass ) ;
	else
	 printf ( "Could not locate string\n" ) ;
	return 0 ;
 }
 
//Function to find and replace a sub string in a main string
int search_destroy ( char source [], char find [], char replace [] )
 
 {
 	int findString ( char main_text [], char sub_text [] ) ;	
	void remString ( char text [], int index, int noe ) ;
	void insertString ( char m_text [], char s_text [], int index ) ;	//Function declarations
	
	int index = findString ( source, find ) ;		//Finding if sub string exists in main string
	if ( index == -1)
	 return -1 ;
	
	remString ( source, index, strlen (find) ) ;	//Removing located sub string from main string
	
	insertString ( source, replace, index ) ;		//Replacing sub string inside main string
	
	return 1 ;
 }
 
//Function to delete sub string from a string
void remString ( char text [], int index, int noe )

 {
   for ( int i = 0 ; i < noe; i++ )
	{
	  text [ index ] = text [ index + noe ] ;
	  index++ ;
	}
 }
 
//Function to store a sub string inside a main string
void insertString ( char m_text [], char s_text [], int index )

 {
 	char buffer [51] ;
	int i = 0 ;
	for ( ; m_text [i] != '\0'; i++ )		//Copying main string to a buffer 
	 buffer [i] = m_text [i] ;
	 
	buffer [i] = '\0' ;
	 
	int m_elem = strlen ( m_text ) ;
	int s_elem = strlen ( s_text ) ;
	int m_index = index ;
	
	for ( int i = 0; i < s_elem; i++ )		//Copying sub text into main string
	 {
	 	m_text [m_index] = s_text [i] ;
		m_index ++ ;
	 }
	 
	while ( buffer [index] != '\0' )
	 {
	 	m_text [index + s_elem] = buffer [index] ;
		index++ ;
	 }
	m_text [index + s_elem] = '\0' ;
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
 
 