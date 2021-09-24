#include <stdio.h>

int main(void)
{
	int x, y;
	
	//Ask user for input
	
	printf("Enter the first integer: ");
	scanf("%i", &x);
	printf("Enter the second integer: ");
	scanf("%i", &y);
	
	//Compute the numbers
	
	if(x % y == 0)
		printf("The second number divides the first evenly\n");
		
	else
		printf("The second number does not divide the first evenly\n");
}