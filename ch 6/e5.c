#include <stdio.h>

int main(void)
{
	int number;
	
	//Ask user for a positve or negative integer
	printf("Enter an integer: ");
	scanf("%i", &number); 
	
	//Reverse and print the number
	
	if(number < 0)
	{
		number = -number;
		
		do
		{
			printf("%i", number % 10);
			number /= 10;
		}
		while(number != 0);
		
		printf("-");
	}
	
	else
	{
		do
		{
			printf("%i", number % 10);
			number /= 10;
		}
		while(number != 0);
	}
}