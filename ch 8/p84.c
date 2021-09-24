#include <stdio.h>

int triNumber (int n)
	{
		int triN = 0;
		
		for (int i = 1; i <= n; i++)
			triN += i;
				
		return triN;
	}

int main (void)
	{
		printf ( "%d\n%d\n%d\n%d\n", triNumber (0), triNumber (10), triNumber (20), triNumber (50) ) ;
		
		return 0;
	}