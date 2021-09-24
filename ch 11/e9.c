/*Reading line from terminal using pointers*/

#include <stdio.h>
#include <string.h>

int main (void)
 {
 	char text [81] ;
	void read_line (char *buffer) ;		//Function declaration
	for (int i = 0; i < 3; i++)
	 {
	 	read_line (text) ;
		printf ("%s\n", text) ;
	 }
	return 0 ;
 }

void read_line (char *buffer)		//Function to read a line
 {
 	char c ;
	do
	 {
	 	c = getchar () ;
		*buffer = c ;
		buffer++ ;
	 }
	while (c != '\n') ;
	*--buffer = '\0' ;
 }