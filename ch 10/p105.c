/*Program to read in scanf statements*/

#include <stdio.h>

int main ( void )

	{
		
		printf ( "Enter three words\n") ;
		
		char harry [81], ron [81], hermoine [81] ;
		
		scanf ( "%5s%4s%3s", harry, ron, hermoine ) ;
		
		printf ( "s1 = %s\ns2 = %s\ns3 = %s\n", harry, ron, hermoine ) ;
		
		return 0;
		
	}