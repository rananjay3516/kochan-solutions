/*Program to check a word in a pre-defined dictionary using binary search and print its meaning*/

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
												{ "lambast", "to disparage for something" },
												{ "norse", "relating to the Scandinavian culture" },
												{ "pious", "god-like worship of something" },
												{ "shamable", "capable of being shamed" },
												{ "venison", "meat of a deer" }
										 } ;
										 
		int entries = 12 ;						
		
											  
		//Function declaration
		int lookup ( const struct entry dictionary [], const char word [], const int entries ) ;
		void all_low_case ( char word [] ) ;
		
		//Variable to store word to search
		char word [20] ;
		
		//Asking user for word to search
		printf ( "Enter word to search : " ) ;
		scanf ( "%19s", word ) ;
		
		//Function call
		all_low_case ( word ) ;
		
		//Function call to store element number of the dictionary that contains the meaning
		int entry = lookup ( today, word, entries ) ;
		
		if ( entry != -1 )
			printf ( "\nMeaning - %s\n\n", today [entry].meaning ) ; 
			
		else
			printf ( "\nSorry, the word %s is not in the dictionary\n\n", word ) ;
			
		return 0 ;
		
	}
	
//Function to lookup a word in a pre-defined dictionary

int lookup ( const struct entry dictionary [], const char word [], const int entries )

	{
		
		//Function declaration
		int compare_strings ( const char word1 [], const char word2 [] ) ;
		
		//Checking if word exists in the dictionary using binary search
		
		int high = entries - 1, low = 0, mid, result ;
		
	
		while ( low <= high ) 
			{
				
				mid = ( low + high ) / 2 ;
				
				result = compare_strings ( dictionary [mid].word, word ) ;
				
				if ( result == -1 )
					low = mid + 1 ;
				
				else if ( result == 1 )
					high = mid - 1 ;
					
				else
					return mid ;
				
			}
			
		return -1 ;
		
	} 
	
//Function to compare two strings

int compare_strings ( const char word1 [], const char word2 [] )

	{
		
		//Counter and response
		int i = 0, answer ;
		
		//Iterating over the strings until mismatch or null char encountered
		while ( word1 [i] == word2 [i] && word1 [i] != '\0' && word2 [i] != '\0' )
			i++ ;
		
		//- 1 to indicate first parameter is lexicographically lower, 1 to indicate higher, 0 to indicate equality	
		if ( word1 [i] < word2 [i] )
			answer = -1 ;
			
		else if ( word1 [i] == word2 [i] )	
			answer = 0 ;
			
		else
			answer = 1 ;
			
		return answer ;
		
	}
	
//Function to convert string to all lower case char

void all_low_case ( char word [] )

	{
		
		//Loop to iterate over each char and convert into lower case if in upper case
		
		for ( int i = 0; word [i] != '0'; i++ )
			{
				if ( word [i] >= 'A' && word [i] <= 'Z' )
					word [i] += 32 ;
			}
			
		return ;
		
	}


	
	
	
	
