/*Program to calculate sum of an integer array*/

#include <stdio.h>

//Global array
int total_classes [10] = { 5, 7, 2, 9, 0, 6, 12, 67, 34, 7 } ;


//Main function
int main ( void )

	{
		
		//Function decalaration
		int sum_array ( void ) ;
		
		//Printing sum of array elements
		printf ( "Total classes = %i\n", sum_array ( ) ) ;
		
		return 0;
		
	}
	
	
//Function to calculate sum of the global array
int sum_array ( void )

	{
		
		int sum = 0 ;
		
		for ( int i = 0; i < 10; i++ )
			sum += total_classes [i] ;
		
		return sum ;
			
	}