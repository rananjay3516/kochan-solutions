#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	// Declaring elements and initializing first two elements of primes as 2 and 3
	
	int primes[50], index = 2;
	bool isPrime;
	
	primes[0] = 2;
	primes[1] = 3;
	
	/* Creating a loop to check integers (after skipping 2, 3 and 4) from 5 to 50 */
	for(int p = 5; p < 51; p += 2)
	{
		isPrime = true;
		
		/* Creating a loop to check for the integer's divisibilty with the existing primes- but only upto the sqaure root of the integer */
		for(int i = 1; (p / primes[i] >= primes[i]) && (isPrime); i++)
		{
			if(p % primes[i] == 0)
			isPrime = false;
		}
		
		// Checking isPrime as a flag to add integers detected as primes 
		if(isPrime == true)
		{
			primes[index] = p;
			index++;
		}
	}
	 
	/* Printing all the detcted primes
	   The conditional checks for (j < index) instead of (j <= index) because the index gets increased by 1 even after the last detected prime is added to the array */
	for(int j = 0; j < index; j++)
		printf("%i ", primes[j]);
	
	printf("\n");
	
}
