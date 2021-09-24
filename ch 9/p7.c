/*Program to store and display number of days in a moonth and month abbreviation - arrays within strcutures*/

#include <stdio.h>

int main ( void )

	{
		
		//Structure definition
		struct month
			
			{
				int days ;
				char name [ 3 ] ; 
			} ;
		
		//Array of month structures 	
		struct month y2017 [ 12 ] = { 	
										{ 31, { 'J', 'A', 'N' } }, { 28, { 'F', 'E', 'B' } }, { 31, { 'M', 'A', 'R' } }, { 30, { 'A', 'P', 'R' } }, 
										{ 31, { 'M', 'A', 'Y' } }, { 30, { 'J', 'U', 'N' } }, { 31, { 'J', 'U', 'L' } }, { 31, { 'A', 'U', 'G' } }, 
										{ 30, { 'S', 'E', 'P' } }, { 31, { 'O', 'C', 'T' } }, { 30, { 'N', 'O', 'V' } }, { 31, { 'D', 'E', 'C' } } 
										
								   } ;
		
		//Printing month structures - days and acronym - for 2017
		for ( int i = 0; i < 12; i++ )	
		
			printf ( "%c%c%c------%i\n", y2017 [ i ].name [ 0 ], y2017 [ i ].name [ 1 ], y2017 [ i ].name [ 2 ], y2017 [ i ]. days ) ;
			
		return 0 ;				   					
		
			
	}