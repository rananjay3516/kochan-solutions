/*Program to insert a sub string in main string*/

#include <stdio.h>
#include <string.h>

int main ( void )

 {
 	char yoda [] = "London tale" ;
	void insertString ( char m_text [], char s_text [], int index ) ;	//Function declaration
	insertString ( yoda, "fairy", 7 ) ;
	printf ( "%s\n", yoda ) ;
	return 0 ;
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