#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p, d;
	bool isPrime;
	
	printf("2 ");
	
	for(p = 3; p <= 50; p += 2)
	{
		isPrime = true;
		
		for(d = 3; isPrime != false && d < p; d += 2)
		{
			if(p % d == 0)
			isPrime = false;
		}
		
		if(isPrime != false)
		printf("%i ", p);
	} 
	
	printf("\n");
}