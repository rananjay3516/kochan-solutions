#include <stdio.h>

void multiplyby2 ( float values [], int noe )

	{
		
		for ( int i = 0; i < noe; i++)
			values [i] *= 2;
					
	}
	
int main ( void )
	
	{
		
		float array [5] = { 1.2, -3.7, 6.2, 8.55, 9.5 };
		
		void multiplyby2 ( float values [], int noe );
		
		multiplyby2 ( array, 5 );
		
		for ( int i = 0; i < 5; i++ )
			printf("%.2f\n", array [ i ] );
		
		return 0;
		
	}