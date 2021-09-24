/*Function to convert all lower case chars into upper case chars*/

#include <stdio.h>

int main (void)
 
 {
 	char text1 [] = "mary had a little lamb" ;
	char text2 [] = "do or do not. There is No TRY" ;
	void upper_case ( char text [] ) ;		//Function declaration
	
	upper_case (text1) ;
	upper_case (text2) ;
	printf ( "%s\n", text1 ) ;
	printf ( "%s\n", text2 ) ;
	return 0 ;
 }
 
void upper_case ( char text [] )
 
 {
 	for ( int i = 0; text [i] != '\0'; i++ )
	 {
	 	if ( text [i] >= 'a' && text [i] <= 'z' )
		 {
		 	text [i] = text [i] - 'a' + 'A' ;
		 }
	 }
	return ;
 }