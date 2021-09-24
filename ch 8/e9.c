/*Program to calculate LCM of two integers*/

#include <stdio.h>

int main ( void )

	{
		int lcm ( int u, int v ) ;
		
	 	//Getting the two number to calculate the lcm
		int a, b ;
		
		printf ( "Enter the two numbers to calculate the LCM\nA = ") ;
		scanf ( "%i", &a ) ;
		printf ( "B = " ) ;
		scanf ( "%i", &b ) ;
		
		if ( lcm ( a, b ) != 0 )
			printf ( "LCM = %i", lcm ( a, b ) ) ;
		else
			printf ( "Inavlid numbers\n" ) ;
		
		return 0;
		
	}
	
//Function to calculate the LCM of two integers
int lcm ( int u, int v )

	{
		
		//Function declaration
		int gcd ( int u, int v ) ;
		
		if ( u >= 0 && v >= 0 )
			{
				int x = u * v / gcd ( u, v ) ;
				return x ;
			}
			
		else
			return 0 ;
			
	}

//Function to calculate GCD of two integers	
int gcd ( int u, int v )
	{
		
		int temp;
		
		while(v != 0)
			{
				temp = u % v;
				u = v;
				v = temp;
			}
		
		return u;
		
	}
