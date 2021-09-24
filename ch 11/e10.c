/*Checking two strings for equality using pointers*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (void)
 {
 	bool is_equal (char *a, char *b) ;		//Function declaration
	char text1 [] = "Rick and Morty bitch!" ;
	char text2 [] = "Rick and Morty bitch!" ;
	if ( is_equal (text1, text2) )
	 printf ("Equal Strings\n") ;
	else
	 printf ("Unequal Strings\n") ;
	return 0 ;
 }

bool is_equal (char *a, char *b)		//Function to compare two strings for equality
 {
	while (*a == *b && *a != '\0')
	 {
	 	a++ ;
		b++ ;
	 }
	if (*a == *b)
	 return true ;
	else
	 return false ;
 }