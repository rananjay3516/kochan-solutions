/*Enum data types to store days of a month*/
#include <stdio.h>

enum month {january = 1, february, march, april, may, june, july,\
august, september, october, november, december} ;

int main (void)
 {
 	enum month input ;			//Enum data type 'month' variable
	input = (enum month) 0 ;
	printf("Enter month: ") ;		//Getting month input
	scanf("%i", &input) ;
	int totalDays = 0 ;
	switch (input) {			//Assigning days to month
		case january:
		case march:
		case may:
		case july:
		case august:
		case october:
		case december:
			totalDays = 31 ;
			break ;
		case april:
		case june:
		case september:
		case november:
			totalDays = 30 ;
			break ;
		case february:
			totalDays = 28 ;
			break ;
		default:
			printf ("Incorrect month number\n") ;
			break ;
	}
    if (input == february)
	 printf("Total days = %i (unless leap year)\n", totalDays) ;		//If month is feb
	else if (totalDays != 0)												//If valid month number
	 printf("Total days = %i\n", totalDays) ; 
	return 0 ;
 }