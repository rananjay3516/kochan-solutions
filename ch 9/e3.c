/*Program to calculate elapsed time between two time-sets*/

#include <stdio.h>

//Structure definition for storing time
struct time

	{
		int hours ;
		int minutes ;
		int seconds ;
	} ;

int main ( void )

	{
		
		//Function declaration
		struct time elapsed_time ( struct time start, struct time end ) ;
		
		//Declaring time structure variables
		struct time set_1, set_2 ;
		
		//Getting time sets from user and storing it in set_1 and set_2
		printf ( "Enter start time (hh:mm:ss) : " ) ;
		scanf ( "%i:%i:%i", &set_1.hours, &set_1.minutes, &set_1.seconds ) ;
		
		//Check for a valid 24 hour time set
		if ( set_1.hours > 23 || set_1.minutes > 59 || set_1.seconds > 59 )
		
			{
				printf ( "Invalid time set\n" ) ;
				return 0 ;
			}
			
		printf ( "Enter final time (hh:mm:ss) : " ) ;
		scanf ( "%i:%i:%i", &set_2.hours, &set_2.minutes, &set_2.seconds ) ;
		
		//Check for a valid 24 hour time set
		if ( set_2.hours > 23 || set_2.minutes > 59 || set_2.seconds > 59 )
		
			{
				printf ( "Invalid time set\n" ) ;
				return 0 ;
			}
		
		//Function call to get elapsed time and store it in a struct time variable	
		struct time yoda = elapsed_time ( set_1, set_2 ) ;
		
		//Print elapsed time
		printf ( "Elapsed time (hh:mm:ss) : %.2i:%.2i:%.2i\n\n", yoda.hours, yoda.minutes, yoda.seconds ) ;
		
		return 0 ;
			
	}
	
	
	
//Function to calculate elapsed time between two time sets
struct time elapsed_time ( struct time start, struct time end ) 

	{
		
		//Time structure variable to store elapsed time
		struct time elapsed = { 0, 0, 0 } ;
		
		//Calculating elapsed Seconds
		
		if ( start.seconds < end.seconds )
		
			{
				while ( start.seconds < end.seconds )
					
					{
						elapsed.seconds ++ ;
						start.seconds ++ ;
					}
			}
			
		else if ( start.seconds >= end.seconds )
		
			{
				while ( start.seconds < 60 )
				
					{
						elapsed.seconds ++ ;
						start.seconds ++ ;
					}
					
				while ( end.seconds > 0 )
				
					{
						elapsed.seconds ++ ;
						end.seconds -- ;
					}
					
				//Adjusting minutes accordingly
				elapsed.minutes -- ;
				
			}
			
				
			//Calculating elapsed Minutes
				
			if ( start.minutes < end.minutes )
		
			{
				while ( start.minutes < end.minutes )
					
					{
						elapsed.minutes ++ ;
						start.minutes ++ ;
					}
					
			}
			
		else if ( start.minutes >= end.minutes )
		
			{
				while ( start.minutes < 60 )
				
					{
						elapsed.minutes ++ ;
						start.minutes ++ ;
					}
					
				while ( end.minutes > 0 )
				
					{
						elapsed.minutes ++ ;
						end.minutes -- ;
					}
					
				//Adjusting hours
				elapsed.hours -- ;
				
			}
			
		//Calculating elapsed Hours
				
			if ( start.hours < end.hours )
		
			{
				while ( start.hours < end.hours )
					
					{
						elapsed.hours ++ ;
						start.hours ++ ;
					}
					
			}
			
		else if ( start.hours >= end.hours )
		
			{
				while ( start.hours < 24 )
				
					{
						elapsed.hours ++ ;
						start.hours ++ ;
					}
					
				while ( end.hours > 0 )
				
					{
						elapsed.hours ++ ;
						end.hours -- ;
					}
				
			}
			
		//Adjusting time set into a 24-hour format
		
		if ( elapsed.seconds == 60 )
			
			{
				elapsed.seconds = 0 ;
				elapsed.minutes += 1 ;
				
				if ( elapsed.minutes == 60 )
		
					{
						elapsed.minutes = 0 ;
						elapsed.hours += 1 ;
						
						if ( elapsed.hours == 24 )
							elapsed.hours = 0 ;
					}
					
			}
			
		
		return elapsed ;	
		
	}