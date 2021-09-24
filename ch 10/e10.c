/*Program to sort dictionary entries in alphabetical order*/

#include <stdio.h>

struct entry
 {
 	char word [11] ;
	char def [101] ;
 } ;

int main (void)
 
 {
 	struct entry today [12] = {     { "inane", "that which does not make sense" },
									{ "didactic", "intended to teach" }, 
									{ "pious", "god-like worship of something" },
									{ "fastidious", "especially nit picky about stuff or details" },
									{ "heretic", "someone who goes against the status quo" },
									{ "eponymous", "the thing after which something is named" },
									{ "conflate", "to bring things together and mix them" },
									{ "shamable", "capable of being shamed" },
									{ "lambast", "to disparage for something" },
									{ "venison", "meat of a deer" },
									{ "norse", "relating to the Scandinavian culture" },
									{ "jonesing", "suffering from withdrawal"}, 
		
							  } ;
							  
	int elements = 12 ;
	void sort_alpha ( struct entry list [], int noe ) ;		//Function decalaration
	
	sort_alpha ( today, elements ) ;	//Function call
	
	for ( int i = 0; i < elements; i++ )
	 printf ( "%s - %s\n", today[i].word, today[i].def ) ;
	 
	printf ( "\n" ) ;
	return 0 ;
 }
 
//Function to sort an array of dictionary elements into alphabetical order - bubble sort

void sort_alpha ( struct entry list [], int noe )
 
 {
 	for ( int x = 0; x < noe; x++ )
	 {
	 	for ( int y = 0; y < noe - 1; y++ )
		 {
		 	if ( list[y].word[0] > list[y+1].word[0] )
			 {
			 	struct entry temp = list [y+1] ;
				list [y+1] = list [y] ;
				list [y] = temp ; 
			 } 
		 }
	 }
 }