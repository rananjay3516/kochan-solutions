#include <stdio.h>
#include <string.h>

int main (void)
 {
 	char *message = "Programming in C is fun\n" ;
	char message2[] = "You said it\n" ;
	char *format = "x = %i\n" ;
	int x = 100 ;
	
	//Set 1
	printf ("Programming in C is fun\n") ;
	printf ("%s", "Programming in C is fun\n") ;
	printf ("%s", message) ;
	printf (message) ;
	
	//Set 2
	printf ("You said it\n") ;
	printf ("%s", message2) ;
	printf (message2) ;
	printf ("%s", &message2[0] ) ;
	printf (&message2 [0] ) ;
	
	//Set3
	printf ("said it\n") ;
	printf (message2 + 4) ;
	printf ("%s", message2 + 4) ;
	printf ("%s", &message2 [4] ) ;
	printf (&message2 [4] ) ;
	
	//Set 4
	printf ("x = %i\n", x) ;
	printf (format, x) ;
 }