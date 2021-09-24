/*Program to check a word in a pre-defined dictionary and print its meaning*/

#include <stdio.h>
#include <stdbool.h>

//Struct definition for a dictionary entry

struct entry

	{
		char word [20] ;
		char meaning [100] ;
	} ;

int main ( void )

	{
		
		//Defining dictionary as an arrry of struct entry elements
		const struct entry today [15] = {       { "conflate", "to bring things together and mix them" },
												{ "didactic", "intended to teach" }, 
												{ "eponymous", "the thing after which something is named" },
												{ "fastidious", "especially nit picky about stuff or details" },
												{ "heretic", "someone who goes against the status quo" },
												{ "inane", "that which does not make sense" },
												{ "jonesing", "suffering from withdrawal"}, 
												{ "Norse", "relating to the Scandinavian culture" },
												{ "pious", "god-like worship of something" },
												{ "shamable", "capable of being shamed" }
										 } ;
											  
		//Function declaration
		int lookup ( const struct entry dictionary [], const char word [], int entries ) ;
		
		//Variableto store word to search
		char word [20] ;
		
		//Asking user for word to search
		printf ( "Enter word to search : " ) ;
		scanf ( "%s", word ) ;
		
		//Function call to store element number of the dictionary that contains the meaning
		int entry = lookup ( today, word, 10 ) ;
		
		if ( entry != -1 )
			printf ( "\nMeaning - %s\n\n", today [entry].meaning ) ;
			
		else
			printf ( "\nSorry, the word is not in the dictionary\n\n" ) ;
			
		return 0 ;
		
	}
	
//Function to lookup a word in a pre-defined dictionary

int lookup ( const struct entry dictionary [], const char word [], int entries )

	{
		
		//Function declaration
		bool equal_strings ( const char word1 [], const char word2 [] ) ;
		
		//Loop to check word against all word entries in the dictionary
		
		for ( int i = 0; i < entries; i++ )
			{
				if ( equal_strings ( word, dictionary [i].word ) )
					return i ;
			}
			
		return -1 ;
		
	} 
	
//Function to check if two strings are equal

bool equal_strings ( const char word1 [], const char word2 [] )

	{
		
		bool is_equal = false ;
		//Counter for iterating over the strings
		int i = 0 ; 
		
		//Loop to iterate over each char of the two words until either they don't match or a null char is encountered
		
		while ( word1 [i] == word2 [i] && word1 [i] != '\0' && word2 [i] != '\0' )
			i++ ;
			
		if ( word1 [i] == word2 [i] )
			is_equal = true ;
			
		return is_equal ;
		 
	}
	
	
	
	
