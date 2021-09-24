/*Program to check if an int is prime*/

#include <stdio.h>

//Declaring global variable
int global_n ;

//Main function
int main ( void )

	{
		
		//Function declaration
		int prime ( void ) ;
		
		//Getting number to check if its prime
		printf ( "Enter number to check if it's prime: " ) ;
		scanf ( "%d", &global_n) ;
		
		if ( prime ( ) == 1 )
			printf ( "Prime\n" ) ;
		else if ( prime ( ) == 0 )
			printf ( "Non-prime\n" ) ; 
			
		return 0;
	
	}
	
//Function to check if number is prime
int prime ( void )

	{
		
		//Returns 1 if prime and 0 if not prime
		if ( global_n % 2 == 0 )
			return 0 ;
			
		for ( int p = 3; p <= global_n / 2; )
			{
				if ( global_n % p == 0 )
					return 0 ;
				else
					p += 2 ; 
			}
			
		return 1 ;
		
	}