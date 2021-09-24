#include <stdio.h>

int main(void)
{
	int rem, number;
	
	printf("Enter number to be tested: ");
	scanf("%i", &number);
	
	rem = number % 2;
	
	if (rem == 0)
		printf("The number %i is even\n", number);
	
	else
		printf("The number %i is odd", number);
	
	return 0;
}