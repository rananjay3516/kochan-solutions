#include <stdio.h>

int main(void)
{
	int x, y;
	
	/* Ask user for two integers */
	
	printf("Enter the first integer: ");
	scanf("%i", &x);
	printf("Enter the second integer: ");
	scanf("%i", &y);
	
	/*Compute the integers: divide and display result upto 3 decimal places and check for division by zero */
	
	if(y == 0)
		printf("Not defined\n");
		
	else
		printf("%.3f\n", (float) x / y);
}
