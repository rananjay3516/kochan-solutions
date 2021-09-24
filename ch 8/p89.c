#include <stdio.h>

int minimum ( int values [ 10 ] )
	
	{
		
		int minValue = values [ 0 ];
		
		for ( int i = 1; i < 10; i++)
			{
				if ( values [ i ] < minValue )
					minValue = values[ i ];
			}
		return minValue;
		
	}
	
int main ( void )
	
	{
		
		int minimum ( int values [ 10 ] );
		
		int minScore [ 10 ];
		
		printf("ENTER 10 SCORES\n");
		
		for ( int i = 0; i < 10; i++)
				scanf("%i", &minScore [ i ]);
		
		printf("THE MINIMUM SCORE IS %i\n", minimum ( minScore ) );
		
		return 0;
			
	}