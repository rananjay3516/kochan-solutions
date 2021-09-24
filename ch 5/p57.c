#include <stdio.h>

int main(void)
{
	int u, v, temp;
	
	//Getting the integers from user
	
	printf("Please input two non-negative integers\n");
	scanf("%i %i\n", &u, &v);
	
	
	//Calculate the gcd using Euclid's algorithm
	
	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf("The gcd is %i\n", u);
	
	return 0;
}