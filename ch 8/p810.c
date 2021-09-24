#include <stdio.h>

int minimum ( int values [], int noe )
	
	{
		int minValue = values [ 0 ] ;
		
		for ( int i = 1 ; i < noe ; i++ )
			{
				if ( values [ i ] < minValue )
					minValue = values [ i ] ;
			}
		
		return minValue ;
	}
	
int main ( void )
	
	{
		int minimum ( int values [], int noe );
		
		int array1 [5] = { 157, -28, -37, 26, 10 }, array2 [7] = { 12, 45, 1, 10, 5, 3, 22 };
		
		printf("ARRAY 1 MINIMUM = %i\nARRAY 2 MIMINUM = %i\n", minimum ( array1, 5 ), minimum ( array2, 7 ) );
		
		return 0;
	}