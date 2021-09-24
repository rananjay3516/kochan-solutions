#include <stdio.h>

int main(void)
{
	int numFib;
	
	//Asking user for the number of Fibonacci numbers to be generated and checking for invalid input
	printf("Enter the number of Fibonacci numbers to be generated (between 1 and 75): ");
	scanf("%i", &numFib);

	unsigned long long int Fibonacci[numFib];
	/* The complete program executes only if the variable length array is declared after the variable has been assigned a value - it does not work if declared
	before value assignment to the variable. The if statement to check the value of the variable can however succeed declaration of the variable length array. */ 
	
	if(numFib < 1 || numFib > 75)
	{
		printf("Invalid number\n");
		return 1;
	}
	
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;
	
	//Calculating the requested Fibonacci numbers
	for(int i = 2; i < numFib; i++)
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
	
	//Displaying the Fibonacci numbers	
	for(int i = 0; i < numFib; i++)
		printf("%i ", Fibonacci[i]);
		
	return 0;
	
}
