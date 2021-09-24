/*Program to update array of time strucutes*/

#include <stdio.h>

//Global strcuture definition
struct time 

	{
		int hour ;
		int minute ;
		int second ;
	} ;


int main ( void )

	{
		//Function declaration
		struct time time_update ( struct time now ) ;
		
		//Array of five struct time variables
		struct time testTimes [ 5 ] = { { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 }, { 23, 59, 59 }, { 19, 12, 27 } } ;
		
		//Loop to update and print all five time sets using function call
		for ( int i = 0; i < 5; i++ )
			
			{
				printf ( "Current time is %.2i:%.2i:%.2i", testTimes [ i ].hour, testTimes [ i ].minute, testTimes [ i ].second ) ;
				testTimes [ i ] = time_update ( testTimes [ i ] ) ;
				printf ( "...One second later it's %.2i:%.2i:%.2i\n", testTimes [ i ].hour, testTimes [ i ].minute, testTimes [ i ].second ) ;
			}
		
		return 0 ;
		
	}



//Function to update time
struct time time_update ( struct time now )

{
	//Update time by one second
	now.second ++ ;
	
	//Adjust hours, minutes and seconds
	
	if ( now.second == 60 )
		
		{
			now.minute ++ ;
			now.second = 0 ;
			
			if ( now.minute == 60 )
				
				{
					now.hour ++ ;
					now.minute = 0 ;
					
					if ( now.hour == 24 )
						
						{
							now.hour = 0 ;
						}
						
				}
				
		}
	
	return now ;
	
}