#include <stdio.h>

//Declaring gloabl variables and array
int g_con_num [64], g_base, g_digit = 0, g_check ;
long int g_number ;

int main ( void )

	{
		
		//Function decalarations
		void get_number ( void ) ; 
		void convert_num ( void ) ; 
		void print_num ( void ) ; 
	
		//Loop to convert numbers continously until 0 is entered as the number to be converted
		
		do
			{
				get_number () ;	
				convert_num () ; 
				
				//check to terminate loop if number to be converted entered is 0
				if ( g_check != 1 )
					{
						print_num () ; 
						printf ( "\n" ) ; 
					}
				g_digit = 0 ;
				
			}
		while ( g_check != 1 ) ; 
	
		return 0 ; 
		
	}
	

//Function to get the number to be converted and the base	
void get_number ( void )

	{
		
		int yoda ;
		
		//Get the number and base
		printf ( "Number to be converted?: " ) ; 
		scanf ( "%li", &yoda ) ; 
		
		//check to terminate loop if number to be converted entered is 0
		if ( yoda == 0 )
			{
				g_check = 1 ; 
				return ; 
			}
			
		g_number = yoda ;
			
		printf ( "Base?: " ) ; 
		scanf ( "%i", &g_base ) ; 
			
		//Check for value of base and change value of base to 10 if invalid
		while ( g_base < 2 || g_base > 16)
			{
				printf ( "Base must be between 2 and 16\n" ) ; 
				g_base = 10 ; 
				printf ( "\n" ) ; 
				
				printf ( "Base?: " ) ; 
				scanf ( "%i", &g_base ) ; 
			}
		
	}
	

//Function to convert the number into the different base	
void convert_num ( void )

	{
		//Loop to store converted digits into the array, in reverse order
		do
			{
				g_con_num [ g_digit ] = g_number % g_base ; 
				//Incrementing digit counter to keep track of number of digits in the converted number
				g_digit++ ; 
				g_number /= g_base ; 
			}
		while ( g_number != 0 ) ; 
			
	}
	
	
void print_num ( void )

	{
		//Character array to print the corresponding digit of the converted number as a char
		const char base_digits [16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' } ; 
		
		printf ( "Converted number = " ) ; 
		
		//Decrement digit counter to align it with the array index
		for ( g_digit --; g_digit >= 0; g_digit -- )
			printf( "%c", base_digits [ g_con_num [ g_digit ] ] ) ; 
				
		printf( "\n" ) ; 
	}