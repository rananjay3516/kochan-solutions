/*Program to update time by a second in military time format*/

#include <stdio.h>

//Structure definition to store time
struct time

	{
		int second ;
		int minute ;
		int hour ;
	} ;
	
int main ( void )

	{
		//Function declaration
		struct time time_update ( struct time now ) ;
		
		//Structure variables to store time
		struct time time_input, time_output ;
		
		//Getting user input for current time
		printf ( "Enter the current time (hh:mm:ss) : " ) ;
		scanf ( "%i:%i:%i", &time_input.hour, &time_input.minute, &time_input.second ) ;
		
		//Function call to update time
		time_output = time_update ( time_input ) ;
		
		//Printing updated time
		printf ( "Updated time : %.2i:%.2i:%.2i\n", time_output.hour, time_output.minute, time_output.second ) ;
		
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