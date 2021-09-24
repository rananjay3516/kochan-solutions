/*Using extern variables*/
#include <stdio.h>

int goad = 42 ;

int main (void)
 {
 	void change_goad (void) ;		//Funk deck
	printf("%i\n", goad) ;
	change_goad() ;
	printf("%i\n", goad) ;
	return 0 ;
 }