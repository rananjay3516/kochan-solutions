/*Program to calculate the number of elapsed days between two dates*/

#include <stdio.h>

//Structure definition for storing a date
struct date

	{
		int day ;
		int month ;
		int year ;
	} ;

int main ( void )

	{
		
		//Function decalration
		int calc_N_value ( struct date d ) ;
		
		//Declaring structure date variables to store the two dates
		struct date day_1, day_2 ;
		
		//Getting the two dates from user and storing them in struct date variables day_1 and day_2
		printf ( "Enter Date 1 (dd:mm:yyyy): " ) ;
		scanf ( "%i:%i:%i", &day_1.day, &day_1.month, &day_1.year ) ;
		
		//Check to see if day_1 date is after Mar 1, 1700
		if ( ( day_1.year == 1700 && day_1.month < 3 ) || day_1.year < 1700 )
			
			{
				printf ( "Dates should only be after March 1, 1700" ) ;
				return 0 ;
			}
		
		printf ( "Enter Date 2 (dd:mm:yyyy): " ) ;
		scanf ( "%i:%i:%i", &day_2.day, &day_2.month, &day_2.year ) ;
		
		//Check to see if day_2 date is after Mar 1, 1700
		if ( ( day_2.year == 1700 && day_2.month < 3 ) || day_2.year < 1700 )
			
			{
				printf ( "Dates should only be after March 1, 1700" ) ;
				return 0 ;
			}
		
		//Printing the elapsed days as the difference between N values of day_2 and day_1 using function call to calculate N
		printf ( "Number of elapsed days = %i\n\n", calc_N_value ( day_2 ) - calc_N_value ( day_1 ) ) ;
		
		return 0 ;
		
	} 
	
//Function to calculate the value of N for a date

int calc_N_value ( struct date d )

	{
		int n = 0 ;
		
		//Adding 1 to n if date < Mar 1, 1900; and 2 if date < Mar 1, 1800
		if ( ( d.year == 1900 && d.month < 3 ) || d.year < 1900 )
			
			{
				n += 1 ;
				
				if ( ( d.year == 1800 && d.month < 3 ) || d.year < 1800 )
					n += 1 ;
			}
		
		// n = 1461 * f(year,month) / 4 + 153 * g(month) / 5 + day
		
		if ( d.month <= 2 )
			
			{
				n += ( 1461 * ( d.year - 1 ) ) / 4 ;
				
				n += ( 153 * ( d.month + 13 ) ) / 5 ;
			}
			 
			
		else
			
			{
				n += ( 1461 * d.year ) / 4 ;
				
				n += ( 153 * ( d.month + 1 ) ) / 5 ;
			}
			
		n += d.day ;
		
		return n ;		
			 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	