//Calculating prime numbers upto 150 using Sieve of Erasthosthenes algorithm

#include <stdio.h>

int main(void)
{
	int primes[150], i, j, n = 150;
	
	// Initialize all elements to 0
	for(i = 0; i < 150; i++)
		primes[i] = 0;
	
	//Use the algorithm to generate prime numbers
	for(i = 2; i <= n; i++)
	{
		if(primes[i] == 0)
			printf("%i ", i);
			
		for(j = 1; j < 151; j++)
		{
			if(i*j <=n)
				primes[i*j] = 1;
		}
			
	}
		
	printf("\n");
}