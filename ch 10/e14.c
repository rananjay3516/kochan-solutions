/*Function to convert an int to string*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (void)
 
 {
 	int alpha = 2347, beta = -7423, sig = 3424 ;
	char result_a [11], result_b [11] ;
	void int_to_str ( int num, char result [] ) ;		//Function declaration
	
	int_to_str ( alpha, result_a ) ;
	int_to_str ( beta, result_b ) ;
	
	printf ( "%s\n", result_a ) ;
	printf ( "%s\n", result_b ) ;
	return 0 ;
 }
 
void int_to_str ( int num, char result [] )
 
 {
 	int digit ;
	bool is_neg = false ;
	char buffer [11] ;
	void insertString ( char m_text [], char s_text [], int index ) ;		//Function declaration

	for ( int i = 0; num != 0 ;i++)		//Storing int in string in reverse
	 {
	 	if ( num < 0 )
		 {
		  num = -num ;
		  is_neg = true ;
		 }
		digit = num % 10 ;		 //Isolate one digit from the int
	    num /= 10 ;
	    buffer [i] = digit + '0' ;
	 }
	
	int noe = strlen ( buffer ) ;
	for ( int i = 0, j = 1; i < noe; i++, j++ ) 	//Storing the result in right order by reversing buffer
	 result [i] = buffer [noe - j] ;
	
	if ( is_neg )		//Inserting -ve sign if int was -ve
	 insertString ( result, "-", 0 ) ;
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
	 
	while ( buffer [index] != '\0' )		//Copying required text back into main string from the buffer
	 {
	 	m_text [index + s_elem] = buffer [index] ;
		index++ ;
	 }
	m_text [index + s_elem] = '\0' ;
 }
 
