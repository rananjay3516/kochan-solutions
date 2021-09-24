//Printing first 15 Fibonacci numbers without using arrays

#include <stdio.h>

int main(void)
{
	int x = 0, y = 1, z = 0;
	
	z = x + y;
	printf("%i %i %i ",x, y, z);
	
	for(int i = 0; i < 6; i++)
	{
		x = z;
		z = x + y;
		printf("%i ", z);
		printf("\n") ;
		y = z;
		z = x + y;
		printf("%i ", z);
	}	
	
	printf("\n");
	
}