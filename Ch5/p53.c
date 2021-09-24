#include <stdio.h>

int main(void)
{
	int number, n = 1, trinumber = 0;
	
	
	printf("How many triangular numbers do you want?\n");
	scanf("%i", &number);
	
	//Header text to be displayed 
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n   Sum from 1 to n\n");
	printf("---  ---------------\n");
	
	
	//Generating and printing trianglular numbers
	while(n <= number)
	{
		trinumber += n;
		printf("%2i          %i\n", n, trinumber);
		n++;
	}
	
	
}