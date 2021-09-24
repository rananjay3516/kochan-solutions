/*Program to remove a sub string from a string*/

#include <stdio.h>

int main ( void )
 
 {
	void remString ( char text [], int index, int noe ) ;	//Function declaration
	char solo [] = "the wrong son" ;
	remString ( solo, 4, 6 ) ;	//Function call
	printf ( "%s\n", solo ) ;
	return 0 ;
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