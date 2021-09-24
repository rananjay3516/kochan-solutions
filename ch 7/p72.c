#include <stdio.h>


/* Counting total numerical responses of different kinds from a set of random responses */

int main(void)
{
	int res_count[10]; int response;
	
	//Initialize index elements 1 through 10 of array res_count to 0 
	for(int i = 0; i < 10; i++)
		res_count[i] = 0;
		
	//Asking user for input of 20 responses
	printf("Enter your responses\n");
	
	//Evaluate responses and incrementing corresponding res_count element
	for(int i = 0; ; i++)
		{
			scanf("%i", &response);
			
			//Input of 999 as response terminates the loop
			if(response == 999)
				break;
			
			else if(response < 1 || response > 10)
				printf("Bad response: %i\n", response);
		
			else
				res_count[response - 1]++;
		}
	
	//Print table showing responses
	printf("\nRating     Number of responses\n------     -------------------\n");
	
	for(int i = 1; i <= 10; i++)
		printf("%4i    %14i\n", i, res_count[i - 1]);
	
	return 0;
	
}