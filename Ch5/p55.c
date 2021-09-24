#include <stdio.h>

int main(void)
	{
		int triNumber (int n) ;
		int number, x;
		
		//Ask user for input for number of triangluar numbers to be calculated
		printf("Enter the number of triangular numbers to be computed: ");
		scanf("%i", &x);
		
		//Ask the user for input and print triangular numbers
	
		int count = 0;
		
		while(count < x)
			{
				printf("What triangular number do you want?\n");
				scanf("%i", &number);
				printf("\n");
			
				printf("%i\n\n", triNumber (number) );
				
				count++;
			}
		
		return 0;
	}

//Function to calculate triangular number
int triNumber (int n)
	{
		int triN = 0;
		
		for (int i = 1; i <= n; i++)
			triN += i;
				
		return triN;
	}
